import natu/[video, tte]

proc initTte*(): void =
    tte.initChr4c(bgnr = 0, initBgCnt(cbb = 0, sbb = 31))
    tte.setPos(92, 68)