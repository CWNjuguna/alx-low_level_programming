#include "main.h"

/**
 * _isupper - uppercase letters
 * @y: char to check
 * Return: 0 or 1
 */
int _isupper(int y)
{
	if (y >= 'A' && y <= 'Z')
		return (1);
	else
		return (0);
}
