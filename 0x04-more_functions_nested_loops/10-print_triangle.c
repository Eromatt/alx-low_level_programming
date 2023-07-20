#include "main.h"

/**
 * print_triangle - A function that prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int s;
		int t;

		for (s = 1; s <= size; s++)
		{
			for (t = s; t < size; t++)
			{
				_putchar(' ');
			}

			for (t = 1; t <= s; t++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
