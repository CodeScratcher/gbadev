import natu/[video, tte]
import init
# show background 0
dispcnt = initDispCnt(bg0 = true)

# initialise text
initTte()
tte.write("Hello World!")

while true:
  discard
