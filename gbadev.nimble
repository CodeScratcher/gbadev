# Package

version       = "0.1.0"
author        = "Arielle Fisher"
description   = "A GBA game about logistics in the Heptarchy"
license       = "GPL-2.0-or-later"
srcDir        = "src"
bin           = @["gbadev.gba"]
binDir        = "bin"

# Dependencies

requires "nim >= 2.0.4"
requires "natu >= 0.2.0"

task graphics, "convert spritesheets":
  exec "nim graphics"
