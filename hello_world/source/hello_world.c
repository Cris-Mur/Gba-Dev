#include <gba_console.h>
#include <gba_video.h>
#include <gba_interrupt.h>
#include <gba_systemcalls.h>
#include <gba_input.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *name = "Cristian Murcia.";
	// the vblank interrupt must be enabled for VBlankIntrWait() to work
	// since the default dispatcher handles the bios flags no vblank handler
	// is required
	irqInit();
	irqEnable(IRQ_VBLANK);

	consoleDemoInit();

	printf("My name is: %s", name);
	
	
	// ansi escape sequence to set print co-ordinates
	// /x1b[line;columnH
	iprintf("\x1b[2;3HHello World!\n");
	
	while (1) {
		VBlankIntrWait();
	}
}
