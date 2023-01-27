/*
 * file: 1-alphabet.c
 * Auth: Tanner Burkybile <tanner.burkybile@gmail.com>
 */
#include "main.h"

/**
 * print_alphabet - Prints alphabet a-z
 * Description: prints alphabet
 * Return: always 0;
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
