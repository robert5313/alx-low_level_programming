#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @rest: Pointer to a character that will be changed
 * @sec: Pointer to a character that will be changed
 * @n: value
 *
 * Return: rest
 */

char *_strncpy(char *rest, char *sec, int n)
{
	int k;

	k = 0;

	while (k < n && sec[k] != '\0')
	{
		rest[k] = sec[k];
		k++;
	}

	while (k < n)
	{
		rest[k] = '\0';
		k++;
	}

	return (rest);
}
