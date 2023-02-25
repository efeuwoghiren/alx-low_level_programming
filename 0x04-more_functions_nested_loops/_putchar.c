#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: printable character
 *
 * Return: 1 on success
 * On error, return -1, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
