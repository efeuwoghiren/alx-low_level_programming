#include "main.h"

/**
 * print_alphabet_x10 - makes alphabets 10x
 *
 * Description: "this program aims to print 55 lines of alphabet"
 *
 * Return: 1 (success)
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
