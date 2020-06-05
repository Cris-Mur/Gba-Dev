#ifndef MYLIB_H
#define MYLIB_H

#define IO_MEM 0X04000000
#define VRAM_M 0x06000000

#define REG_DISPCNT *((volatile unsigned int *)(IO_MEM+0x0000))

#define MODE3 0x0003
#define BG_02 0x0400

#define SCREEN_WIDTH 240

#define SCREEN ((unsigned short *)VRAM_M)

#define CLR_MAG 0x441F
#define CLR_CYN 0x7EC0
#define CLR_GRN 0x03E0

#endif /* MYLIB_H */
