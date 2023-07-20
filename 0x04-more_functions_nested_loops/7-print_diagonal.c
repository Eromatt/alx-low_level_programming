#include "main.h"

/**
 * print_diagonal -A function that draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int s;
		int t;

		for (s = 0; s < n; s++)
		{
			for (t = 0; t < n; t++)
			{
				if (t == s)
				_putchar('\\');
				else if (t < s)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
