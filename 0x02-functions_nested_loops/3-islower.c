
#include <stdio.h>
#include "main.h"

/**
* _islower - Entry point
* @c: lowercase
* Return: 1 for true 0 for false
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
