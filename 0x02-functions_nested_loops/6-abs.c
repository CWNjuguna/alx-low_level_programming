#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * description: 'a function that computes the absolute value of an integer'
 * @i: the input number as integer to check
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
