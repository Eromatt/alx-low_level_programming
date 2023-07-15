#include <stdio.h>

/**
 * main - Prog that prints all single digit numbers to base 10.
 *
 * Return: Always 0 (Successs)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
