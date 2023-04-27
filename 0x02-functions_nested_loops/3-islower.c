#include "main.h"
/**
 * main - checks the code
 * the _islower function checks if the character is in lowercase
 * description: 'a function that checks for lowercase character'
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
