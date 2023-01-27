/*
 * file: 3-islower.c
 * Auth: Tanner Burkybile <tanner.burkybile@gmail.com>
 */

#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * Description: islower c
 * Return: Always 0 (Success)
 */
int _islower(int c);
{
	if (c > 96 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
