
#include <stdio.h>
#include "main.h"

/**
* _isalpha - Entry point
* @c: lowercase
* Return: 1 for true 0 for false
*/
int _isalpha(int c)
{
	if ((c > 96 && c <= 122) || (c > 64 && c <= 90 ))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
