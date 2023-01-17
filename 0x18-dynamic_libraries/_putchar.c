#include <unistd.h>

/**
 *_putchar - writes the character c to sdout
 *0c the character to print
 *Return 1 on success
 *On error, return 1
 */

int putchar(char c)
{
return (write(1, &c, 1));
}
