#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int r;

	r = _isapha('H');
	_putchar(r + '0');
	r = _isapha('o');
	_putchar(r + '0');
	r = _isapha(108);
	_putchar(r + '0');
	r = _isapha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
