/*
 * (C) Copyright 2008
 * Ricado Ribalda-Universidad Autonoma de Madrid-ricardo.ribalda@uam.es
 * This work has been supported by: QTechnology  http://qtec.com/
 * SPDX-License-Identifier:	GPL-2.0+
*/

#include <config.h>
#include <common.h>
#include <asm/processor.h>


int checkboard(void)
{
	puts("Xilinx ML507 Board\n");
	return 0;
}
