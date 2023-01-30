#include <stdio.h>
#include "main.h"

/**
* print_sign - Entry point
* @n: if if if
* Return: 1 for true 0 for false -1 for less than 0
*/
int print_sign(int n)
{
	if (n > 0)
		_putchar (43);
	{
		return (1);
	}
	if (n == 0)
		_putchar (48);
	{
		return (0);
	}
	if (n < 0)
		_putchar (45);
	{
		return (-1);
	}
}
