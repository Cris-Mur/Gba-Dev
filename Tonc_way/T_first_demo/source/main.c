/**
 * main - this is a first demostration in a TONC GUIDE i try explain
 * Return: Always 0 (success)
 */

int main()
{
	*(unsigned int*)0x04000000 = 0x0403;
	/*
	   this line create a pointer at 0400:0000h (i/oRAM) with
	   binary value: 00000000 00000000 00000100 00000011 why?
	   int is a 32 bit variable or 32 spaces that have binary
	   values.
	*/
	((unsigned short*)0x06000000)[120+80*240] = 0x001F;
	/*
	  this is same for couple next lines...
	  create a pointer at 0600:0000h (VRAM) in [x+y*w] with
	  value 00000000 00011111 (RED COLOR)
	*/
	((unsigned short*)0x06000000)[136+80*240] = 0x03E0;
	/*
	  create a pointer at 0600:0000h (VRAM) in [x+y*w] with
	  value 00000011 11100000 (GREN COLOR)
	*/
	((unsigned short*)0x06000000)[120+96*240] = 0x7C00;
	/*
	  create a pointer at 0600:0000h (VRAM) in [x+y*w] with
	  value 01111100 00000000 (BLUE COLOR)
	*/

	while(1);

	return (0);
}
