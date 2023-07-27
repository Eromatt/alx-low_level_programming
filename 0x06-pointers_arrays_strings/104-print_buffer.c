#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A prog function that prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int o;
	int t;
	int s;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		t = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (s = 0; s < 10; s++)
		{
			if (s < t)
				printf("%02x", *(b + o + s));
			else
				printf("  ");
			if (s % 2)
			{
				printf(" ");
			}
		}
		for (s = 0; s < t; s++)
		{
			int c = *(b + o + s);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
