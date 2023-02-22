#include "main.h"
/**
 * main -  print_alphabet making the letters
 * Return: void
 */
void print_alphabet(void) /* print_alphabet */
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
