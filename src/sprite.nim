import natu/[video, bios, irq, input, math, utils]

type Sprite = object
    tiles: array[uint32, uint16]
    palette: array[uint16, uint16]
