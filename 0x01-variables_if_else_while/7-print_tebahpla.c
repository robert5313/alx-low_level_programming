#include <stdio.h>

/**
 * main - Entry point
 * author: Robert
 * Return: base 0 (pass)
 */
int main(void)
{
	char bass;

	for (bass = 'z'; bass >= 'a'; bass--)
		putchar(bass);
	putchar('\n');
	return (0);
}
