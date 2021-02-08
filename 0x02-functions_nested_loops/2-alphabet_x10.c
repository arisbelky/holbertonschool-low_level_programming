#include "holberton.h"
/**
 * print_alphabet_x10 -Start the progam frome empty
 * Return: Dosent have a return value
 */
void print_alphabet_x10(void)
{
	char n;
	int i;

	i = 10;
	while (i < 11)
	{
		i++;
		for (n = 'n'; n <= 'z'; n++)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
