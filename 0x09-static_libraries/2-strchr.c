#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @d: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *d, char c)
{
	int i = 0;

	for (; d[i] >= '\0'; i++)
	{
		if (d[i] == c)
			return (&d[i]);
	}
	return (0);
}
