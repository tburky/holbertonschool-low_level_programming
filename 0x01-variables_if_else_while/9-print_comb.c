
/*
 * file: 9-print_comb.c
 * Auth: Tanner Burkybile <tanner.burkybile@gmail.com>
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0 ; n <= 10 ; n++)
	{
	putchar(n + '0');
	if (n < 9)
	{
	putchar(',');
	putchar(' ');
	}
}

	putchar (10);

	return (0);
}
