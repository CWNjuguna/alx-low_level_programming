#include "main.h"
/**
 * description: '_islower function usually checks for lowercase characters'
 * @c: is the char to be checked
 * Return: l for lowercase character. 0 for the others.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
