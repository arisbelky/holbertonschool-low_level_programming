#include "holberton.h"
/**
 * _abs - starts the program
 * Return: 0
 * @c: variable use to return
 */
int _abs(int c)
{
	if (c >  0)
	{
		c = (c * 1);
	}
	else if (c < 0)
	{
		c = (c * -1);
	}
	return (c);
}
