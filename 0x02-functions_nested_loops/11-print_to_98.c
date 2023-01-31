/*
* File 11-print_to_98.c
* Auth: Tanner Burkybile
*/

#include <stdio.h>
#include "main.h"
#include <math.h>

/**
* print_to_98 - print 98
* @n: n is the var
* Description: 98
* Void:
*/

void print_to_98(int n)
{
if (n >= 98)
	{
	while (n > 98)
		printf("%d", ', n--);
	printf("%d\n", n);
	}
else
{
	while (n < 98)
		printf("%d", ', n++);
	printf("%d\n", n);
}
}
