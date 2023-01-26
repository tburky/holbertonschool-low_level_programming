/*
 * file: 3-print_alphabets.c
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
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	putchar (ch);

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	putchar (ch);

	putchar (10);

	return (0);
}
