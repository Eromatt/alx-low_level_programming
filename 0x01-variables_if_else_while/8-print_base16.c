#include <stdio.h>

/**
 * main - Program that prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int t;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (t = 97; t <= 102; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
