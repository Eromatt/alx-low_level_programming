#include "main.h"

/**
 * leet - A prog funtion that encode string to 1337
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	int s;
	int t;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (s = 0; n[s] != '\0'; s++)
	{
		for (t = 0; t < 10; t++)
		{
			if (n[s] == s1[t])
			{
				n[s] = s2[t];
			}
		}
	}
	return (n);
}
