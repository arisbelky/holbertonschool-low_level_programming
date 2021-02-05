#include <stdio.h>
#include <stdlib.h>
/**
 * main -where the program starts
 * Return: ends the execution
 */
int main(void)
{
	int i, n, a;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				if (a > n && n > i)
				{
					putchar(i);
					putchar(n);
					putchar(a);
					if (a != '9' || n != '8' || i != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
