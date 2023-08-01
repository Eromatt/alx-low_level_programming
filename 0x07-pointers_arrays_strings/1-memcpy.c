#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: 'Destination' where memory is stored
 * @src: 'Source' where memory is copied
 * *@n: number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int t = n;

	for (; s < t; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
