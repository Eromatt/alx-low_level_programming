#include <unistd.h>

/**
 * _putchar - Writes the stdout of char c
 * @c: Char to be printed
 *
 * Return: 1 to be returned as (success)
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
