#include "../include/tonc.h"
/**
 * main - this is a first demostration in a TONC GUIDE i try explain
 * Return: Always 0 (success)
 */

int main()
{
	REG_DISPCNT = DCNT_MODE3 | DCNT_BG2;
	/*
	   this line create a pointer at 0400:0000h (i/oRAM) with
	   binary value: 00000000 00000000 00000100 00000011 why?
	   int is a 32 bit variable or 32 spaces that have binary
	   values.
	*/
	m3_mem[80][120] = CLR_RED;
	/*
	  this is same for couple next lines...
	  create a pointer at 0600:0000h (VRAM) in [x+y*w] with
	  value 00000000 00011111 (RED COLOR)
	*/
	m3_mem[80][136] = CLR_LIME;
	/*
	  create a pointer at 0600:0000h (VRAM) in [x+y*w] with
	  value 00000011 11100000 (GREN COLOR)
	*/
	m3_mem[96][120] = CLR_BLUE;
	/*
	  create a pointer at 0600:0000h (VRAM) in [x+y*w] with
	  value 01111100 00000000 (BLUE COLOR)
	*/

	while(1);

	return (0);
}
