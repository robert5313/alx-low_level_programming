#include <stdio.h>
#include "main.h"
/**
 * print_rev - This function prints a string in reverse order
 * @s: pointer parameter
 */

void print_rev(char *s)
{
	int k = 0;
	int j;

	while (s[k] != '\0')
	{
		k++;
	}
	for (j = k - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
