#include <stdio.h>
/**
 * main - Entry point
 * description: 'prints alphabet in lowercase, in uppercase,a new line.'
 * return: Always 0
 */
int main(void)
{
	int n = 97;
	int b = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
