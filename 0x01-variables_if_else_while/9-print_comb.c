#include <stdio.h>
/**
 * main - Entry point
 * description: 'prints all possible combinations of single-digit numbers'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for  (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
