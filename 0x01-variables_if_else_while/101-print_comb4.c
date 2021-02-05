#include <stdio.h>
#include <stdlib.h>
/**
 * main -where the program starts
 * Return: ends the execution
 */
int main(void)
{
	int i;
	int n;
    int a;

	for (i = '0'; i <= '7'; i++)
	{
		for (n = '1'; n <= '8'; n++)
		{
			for (a = '2'; a <= '9'; a++)
			{
				putchar(i);
				putchar(n);
				putchar(a);
				if (i < '7' || n < '8' || a < '9')
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
