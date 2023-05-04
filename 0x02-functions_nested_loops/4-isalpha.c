#include "main.h"
/**
 * description: _is alpha function checks for an alphabetic character 
 * @c: is the character to be checked
 * Return: l for letters, 0 for the others
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
