/*
* File 7-print_last_digit.c
* Auth: Tanner Burkybile
*/

#include <stdio.h>
#include "main.h"
#include <math.h>

/**
* print_last_digit - last digit
* @n: a set variable
* @nn:
* Description: absolute value
* Return: nn last digit
*/
int print_last_digit(int n)
{
	int nn;

	nn = (n % 10);

	if (nn < 0)
	{
	nn = (nn * -1);
	}

	_putchar(nn + '0');
	return (nn);
}
