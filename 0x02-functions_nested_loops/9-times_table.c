/*
* File 9-times_table.c
* Auth: Tanner Burkybile
*/

#include <stdio.h>
#include "main.h"
#include <math.h>

/**
* times_table - 9 times table
* @x:
* @y:
* @z:
* Description: 9 times table
* Void:
*/
void times_table(void)
{
	int x, y, z;

	for (x = 0 ; x < 10 ; x++)
		{
		for (y = 0; y < 10 ; x++)
		{
			z = x * y;

			if (y == 0)
			{
				putchar('0');
			}
			else if (z < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('z + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			}
		_putchar('\n');
		}
}
