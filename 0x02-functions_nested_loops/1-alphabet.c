#include "holberton.h"
/**
 * print_alphabet -start the program
 * Return: 0
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
