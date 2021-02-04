#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -serves as the starting point for program execution
 * Return: ends the execution of a function
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else
	{
		if (last == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, last);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 not 0\n", n, last);
		}
	}
	return (0);
}
