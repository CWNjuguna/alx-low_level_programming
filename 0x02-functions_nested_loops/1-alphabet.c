#include "main.h"
/**
 * main - Entry point
 * description: 'a function that prints the alphabet, in lowercase'
 * Return: Always 0
 */
void print_alphabet(void)
{
	int q;

	for (q = 97; q <= 122; q++)
	{
		_putchar(q);
	}
	_putchar('\n');
}
