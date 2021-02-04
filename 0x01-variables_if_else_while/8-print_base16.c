#include <stdio.h>
#include <stdlib.h>
/**
 * main -start the programs from emty
 * Return: end the execution of the programs
 */
int main(void)
{
	int i;
	char n;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
