#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 *
 * @first1: First string
 * @second2: Second string
 * Return: Value less than 0 if string is less than the other
 * Value greater than 0 if string is greater then the other
 * 0 if strings are equal
 */

int _strcmp(char *first1, char *second2)
{
	int counter, comVal;

	counter = 0;

	while (first1[counter] == second2[counter] && first1[counter] != '\0')
	{
		counter++;
	}

	comVal = first1[counter] - second2[counter];
	return (comVal);
}
