#include "main.h"
/**
 *_is alpha - shows l if the input is a
 *letter  Another cases, shows 0
 * Return: l for letters. ) for the others
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
