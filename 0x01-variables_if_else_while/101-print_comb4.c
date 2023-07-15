#include <stdio.h>

/**
 * main - Program that prints all possible different combinations
 * of three digits.
 *
 * Return: Always 0(Success)
 *
 */
int main(void)
{
	int n;
	int t;
	int o;

	for (n = 48; n < 58; n++)
	{
		for (t = 49; t < 58; t++)
		{
			for (o = 50; o < 58; o++)
			{
				if (o > t && t > n)
				{
					putchar(n);
					putchar(t);
					putchar(o);
					if (n != 55 || t != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
