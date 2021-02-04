#include <stdio.h>
#include <stdlib.h>
/**
 * main -start the program
 * Return: ends the execution
 */
int main(void)
{
	char x;

	x = 0;
	do
	{
		putchar(x);
		x++;
	}
	while (x < 10);
	putchar('\n');
	return (0);
}
