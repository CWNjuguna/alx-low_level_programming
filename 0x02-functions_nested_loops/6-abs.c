#include "main.h"
/**
 *main - abs calculates the absolute values of an integer
 * description: 'a function that computes the absolute value of an integer'
 * i: input number as integer
 * Return: an absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
