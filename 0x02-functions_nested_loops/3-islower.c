#include "main.h"
/**
 * description: 'a function that checks for lowercase character'
 * _islower function is to be used for this
 *
 * Return: l for lowercase character. 0 for the others.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putchar('\n');
}	
