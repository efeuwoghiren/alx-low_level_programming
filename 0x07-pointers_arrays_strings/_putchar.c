#include "main.h"
#include <unistd.h>
/**
 * _ The character to print
 *putchar - writes the character c to stdout
 * @c:
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

