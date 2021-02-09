#include "holberton.h"
/**
 * _islower - Starts the program
 * Return: 0 or 1
 * @c: return a number
 */
int _islower(int c)
{
	int e = 97;
	int g = 122;

	if (e <= c && c <= g)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
