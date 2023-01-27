
#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * @c
 * Return: Always 0 (Success)
 */
int _islower(int c)
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
