#include <stdio.h>
#include <stdlib.h>
/**
 * main -start the program
 * Return: end the execution
 */
int main(void)
{
	char i;

	for (i = 'a'; i < 'e'; i++)
	{
		putchar(i);
	}
	for (i = 'f'; i < 'q'; i++)
	{
		putchar(i);
	}
	for (i = 'r'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
