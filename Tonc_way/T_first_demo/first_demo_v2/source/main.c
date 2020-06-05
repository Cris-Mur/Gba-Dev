#include "../include/mylib.h"

/**
 * rgb15 - convert an palette of colors into data for a pixel
 * @R: input RED color values (0 to 31)
 * @G: input GREEN color values (0 to 31)
 * @B: inpur BLUE color values (0 to 31)
 * Return: value of RGB15bits
 */
unsigned short rgb15(unsigned int R, unsigned int G, unsigned int B)
{
	return (R | ( G<<5 ) | ( B<<10 ));
}

/**
 * main - this is a first demostration in a TONC GUIDE i try explain
 * Return: Always 0 (success)
 */
int main()
{
	REG_DISPCNT  = MODE3 | BG_02;
	/*
	   this line create a pointer at 0400:0000h (i/oRAM) with
	   binary value: 00000000 00000000 00000100 00000011 why?
	   int is a 32 bit variable or 32 spaces that have binary
	   values.
	*/
	SCREEN[120+80*240] = CLR_MAG;
	/*
	  this is same for couple next lines...
	  create a pointer at 0600:0000h (VRAM) in [x+y*w] with
	  value 00000000 00011111 (RED COLOR)
	*/
	SCREEN[136+80*240] = CLR_GRN;
	/*
	  create a pointer at 0600:0000h (VRAM) in [x+y*w] with
	  value 00000011 11100000 (GREN COLOR)
	*/
	SCREEN[120+96*240] = rgb15(0, 11, 31);
	/*
	  create a pointer at 0600:0000h (VRAM) in [x+y*w] with
	  value 01111100 00000000 (BLUE COLOR)
	*/
	SCREEN[136+96*240] = CLR_CYN;

	while(1);

	return (0);
}
