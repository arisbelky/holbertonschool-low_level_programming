#include <stdlib.h>
#include <stdio.h>
/**
 * main - strat program
 * Return: 0
 */
int main(void)
{
	int i, n;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (n > i)
			{
				putchar(i);
				putchar(n);
				if (n != '9' || i != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
