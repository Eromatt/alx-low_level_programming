#include <stdio.h>

/**
 * main - Program entry of all possible different combinations of two digits.
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n;
	int t;

	for (n = 48; n <= 56; n++)
	{
		for (t = 49; t <= 57; t++)
		{
			if (t > n)
			{
				putchar(n);
				putchar(t);
				if (n != 56 || t != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
