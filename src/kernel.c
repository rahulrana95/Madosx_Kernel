#include "../include/kb.h"
#include "../include/isr.h"
#include "../include/idt.h"
#include "../include/util.h"
#include "../include/shell.h"
kmain()
{
	isr_install();
	clearScreen();
	print("Welcome to MADMAX OS....\nPlease enter a command to explore......\n");
    launch_shell(0);    
}
