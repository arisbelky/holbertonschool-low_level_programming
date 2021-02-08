#include "holberton.h"
/**
 * print_alphabet_x10 -starts the programs from nothing
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char n;
	int i;
	
	i = 1;
	while (i < 11)
	{
		i++;
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
