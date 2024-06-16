import std/[strutils]
import natu/config

task build, "build src":
  for dir in listDirs(thisDir()):
    if not dir.endsWith(".git"):
      withDir dir:
        echo dir
        selfExec "build"

task graphics, "convert spritesheets":
  gfxConvert "graphics.nims"
