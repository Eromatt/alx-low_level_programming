#include "main.h"

/**
 * print_square - A function that prints a square, followed by a new line;
 * @size: size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int s;
		int t;

		for (s = 0; s < size; s++)
		{
			for (t = 0; t < size; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
