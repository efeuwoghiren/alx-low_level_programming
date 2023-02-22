#include "main.h"

/**
 * main - print_alphabet_x10
 *
 * Description: "this program aims to print five lines of alphabets"
 *
 * Return: void
 */
void print_alphabet_x10(void) /* Description: "main code snippet that prints */
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
