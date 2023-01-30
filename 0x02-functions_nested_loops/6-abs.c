/*
* File 6-abs.c
* Auth: Tanner Burkybile
*/

#include <stdio.h>
#include "main.h"
#include <math.h>

/**
* _abs - print sign of number
* @n: a set variable
* @_abs:
* Description: absolute value
* Return: (ans) absolute value
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}
