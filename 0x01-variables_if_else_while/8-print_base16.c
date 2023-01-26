
/*
 * file: 8-print_base16.c
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
	char ch;

	for (n = '0' ; n <= '9' ; n++)
	putchar(n);

	for (ch = 'a' ; ch <= 'f' ; ch++)
	putchar(ch);

	putchar (10);

	return (0);
}
