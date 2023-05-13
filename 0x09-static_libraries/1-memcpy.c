#include "main.h"

/**
 * _memcpy - it is a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int z = 0;

	nt i = n;

	for (; z < i; z++)
	{
		dest[z] = src[z];
		n--;
	}
	return (dest);
}
