import std/[strutils]

task build, "build src":
  for dir in listDirs(thisDir()):
    if not dir.endsWith(".git"):
      withDir dir:
        echo dir
        selfExec "build"
