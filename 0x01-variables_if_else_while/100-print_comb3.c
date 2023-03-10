#include <stdio.h>

/**
 * main - Print all possible different combination of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prints digits in tens*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints digits in ones*/
		{
			if (!((ones == tens) || (tens > ones)))/* eliminates repetitions*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');/* adds comma & space*/
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
