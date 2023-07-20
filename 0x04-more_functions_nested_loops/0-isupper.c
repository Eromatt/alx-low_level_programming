#include "main.h"

/**
 * _isupper - Prog that checks for the uppercase characters
 * @c: Variables texts
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
