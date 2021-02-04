#include <stdlib.h>
#include <stdio.h>
/**
 * main -start the program
 * Return: ends the execution
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
