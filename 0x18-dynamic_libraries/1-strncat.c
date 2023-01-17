#include <stdio.h>
#include "main.h"

/**
 * _strncat - Function that concatenates two strings.
 * @first: first string
 * @second: second string
 * @n: number of bytes to concatenate
 * Return: pointer to designated string
 */

char *_strncat(char *first, char *second, int n)
{
	int length, k;

	length = 0;

	while (first[length] != '\0')
	{
		length++;
	}
	for (k = 0; k < n && second[k] != '\0'; k++, length++)
	{
		first[length] = second[k];
	}

	first[length] = '\0';
	return (first);
}
