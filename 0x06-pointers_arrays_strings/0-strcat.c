#include <stdio.h>
#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @first: first string
 * @second: second string
 * Return: pointer to designated string
 */

char *_strcat(char *first, char *second)
{
	int length, k;

	length = 0;

	while (first[length] != '\0')
	{
		length++;
	}
	for (k = 0; second[k] != '\0'; k++, length++)
	{
		first[length] = second[k];
	}

	first[length] = '\0';
	return (first);
}
