#include <stdio.h>
#include <stdlib.h>
/**
 * main -start the program
 * Returne: 0
 */
int main(void)
{
	int i;
	int n;
	int a;
	int x;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				for (x = '0'; x <= '9'; x++)
				{
					if (i == a || n == x)
					{
					putchar(i);
					putchar(n);
					putchar(' ');
					putchar(a);
					putchar(x);
					if ( x != '9' || a != '9' || n != '9' || i != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
