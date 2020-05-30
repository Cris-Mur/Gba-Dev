# Tonc Way

________

The tonc way is an a guide following [Tonc in rot 13 by jasper Vijn](http://www.coranac.com/projects/tonc/) using [DevKitPro](https://devkitpro.org/) on Archlinux for Game Boy Advance by mario :V.

To start i recommend that you domain C language and bit assembly, also good domain in software debug skills, and cool practice in develop software, all it is for you as developer, that become in a most powerfull tools but equal to you i learn in same time that a make this guide XD.

the GameBoy Advance (GBA) is a low level machine in time to run games or programing games / software, it implies that you work with low level data as data types comprehension, bit wise operations, structures, pointers, registers, controllers, sensors and ports, in a few words you need have in mind All GameBoy.

 Software develop environment

Operative System: Linux (Arch in my case) at election
Compiler GCC (GNU compiler Collection)
Developer kit: DevkitPro (DKP)
Emulator: mgba and VBA
Editor At election 

Tonc is part of DKP, that is to say for follow this guide you need install DKP in your system since it contains all libraries, demos and tools that you need, for project directory we copy a template provided by DKP in:

```
$DEVKITPRO/examples/gba/template/
```

this template provide a complete **makefile** to build a GBA software this file is important also you need understand this file for mount your project.

we put the source code (.c files) in **source** directory, own libraries into **include** directory data like images and others into **data** and music, sounds into **music** dir.

after you install DKP gba-dev package the tonc, and libgba libraries become to standard libraries this means you can write "#include <>" like this the libraries.

i said that we handle data types it means that we a little modifies into standard data types

| base  | alt name | unsigned | signed | volatile |
| :---: | :------: | :------: | :----: | :------: |
| char  |   byte   |    u8    | s8 |vu8 / vs8|
| short | halfword | u16 | s16 |vu16 / vs16|
|  int  |   word   | u32 | s32 |vu32 / vs32|

is important that you understand that data types are a binary and hexa numbers (syntax: 0000:0000h) is important that in some cases you need view some variables like hex spaces with binary spaces for example:

```macro
#define REG_DISPSTAT *(u16*)0x04000004
```
REG_DISPSTAT @0400:0004h
| F E D C B A 9 8 | 7 6  |  5   |  4   |  3   | 2(read only) | 1(r) | 0(r) |
| :-------------: | :--: | :--: | :--: | :--: | :----------: | :--: | :--: |
|       VcT       |  --  | VcI  | HbI  | VbI  |     VcS      | HbS  | VbS  |

[GBA hardware](hardware.md)

---

I repeat this guide is following TONC guide that was made in 2007 by Jasper Vijn and this guide is my point of view in based on this