#include "holberton.h"
/**
 * _isalpha -starts the programs
 * @c: return a interger
 * Return: it will reter 0 if false or 1 if thrue
 */
int _isalpha(int c)
{
	int e = 65;
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
