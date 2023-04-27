#include "main.h"
/**
 * main - Entry point
 * description: 'a function that prints 10 times the alphabet, in lowercase'
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int q;
	int r;

	for (r = 1; q <= 10; q++)
	{
		for (r = 97; r <= 122; r++)
		{
			_putchar(r);
		}
		_putchar('\n');
	}
}
