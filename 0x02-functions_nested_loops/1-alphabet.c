/*
 * file: 1-alphabet.c
 * Auth: Tanner Burkybile <tanner.burkybile@gmail.com>
 */
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	_putchar(ch);

	_putchar(10);
}
