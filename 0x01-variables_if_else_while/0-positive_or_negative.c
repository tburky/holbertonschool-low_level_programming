/*
 * file: 0-positive_or_negative.c
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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative\n", n);

	if (n > 0)
		printf("%d is positive\n", n);

	else (n == 0)
		printf("%d is zero\n", n);

	return (0);
}
