#include "main.h"

/**
 * _memset - A prog function that fill a block of memory with
 * a specific value
 * @s: the starting memory address to be filled
 * @b: the given value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int t = 0;

	for (; n > 0; t++)
	{
		s[t] = b;
		n--;
	}
	return (s);
}
