#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int y;

	int j;

	y = 0;

	while (dest[y] != '\0')
	{
		y++;
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[y] = src[j];
		y++;
		j++;
	}
	dest[y] = '\0';

	return (dest);
}
