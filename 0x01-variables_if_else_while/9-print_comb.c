#include <stdio.h>
#include <stdlib.h>
/**
 * main -start the program true there
 * Return: end the execution
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
