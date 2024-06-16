import natu/[video, bios, irq, input, math, utils, memory, oam]
import natu/[graphics]
import animUtils

const anims: array[Graphic, AnimData] = [
  gfxTestCharacter: AnimData(first: 0, len: 1, speed: 3),
]

var graphic: Graphic     # Current image to show
var anim: Anim           # Animation state
var obj: ObjAttr         # Sprite fields

proc initCurrentSprite(g: Graphic) =
  graphic = g
  anim = initAnim(anims[g])
  obj.init(
    pos = vec2i(120, 80) - vec2i(g.width, g.height) / 2,
    size = g.size,
    tid = allocObjTiles(g),  # Reserve enough tiles in VRAM for 1 frame of animation.
    pal = acquireObjPal(g),  # Load the palette into a slot in the PAL RAM buffer
  )

proc destroyCurrentSprite() =
  freeObjTiles(obj.tid)    # Free the tiles.
  releaseObjPal(graphic)   # Palette will also be freed only if nobody else is using it.

var x = 0
var y = 0

proc update =
  if keyIsDown(kiLeft):
    x -= 5
  if keyIsDown(kiRight):
    x += 5
  if keyIsDown(kiUp):
    y -= 5
  if keyIsDown(kiDown):
    y += 5
  
  obj.pos = vec2i(x, y)
  ## Run game logic  
  anim.update()


proc draw =
  ## Do graphical updates
  
  # update OAM entry
  # note: unlike in C, we can do this assignment without clobbering the affine data.
  objMem[0] = obj
  
  if anim.dirty:
    # copy a new frame into VRAM only if we're on a different
    # frame of animation than previously.
    copyFrame(addr objTileMem[obj.tid], graphic, anim.frame)
  
  # Copy palette buffers into PAL RAM.
  flushPals()


proc onVBlank =
  draw()


proc main =
  
  # setup
  
  irq.put(iiVBlank, onVBlank)
  releaseObjPal(graphic)   # Palette will also be freed only if nobody else is using it.

  
  
  dispcnt.init(layers = { lBg0, lObj }, obj1d = true)
  
  # Init BG0
  bgcnt[0].init(cbb = 0, sbb = 31)
    
  # Hide all sprites
  for obj in mitems(objMem):
    obj.hide()
  
  initCurrentSprite(gfxTestCharacter)
  
  while true:
    keyPoll()
    update()
    VBlankIntrWait()


main()
