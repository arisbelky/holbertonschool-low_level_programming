#include <stdio.h>
#include <stdlib.h>
/**
 * main -start the program
 * Return: end the execution
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
	putchar(i);
	}
	putchar('\n');
	return (0);
}
