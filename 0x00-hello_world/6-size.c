#include <stdio.h>
/**
 * main -Serves as the starting point for program execution
 * Return: ends the execution of a function
 */
int main(void)
{
	char charType;
	short shortType;
	int intType;
	long longType;
	float floatType;

	printf("Size of a char:%lubytes\n" sizeof(charType));
	printf("Size of a short:%lubytes\n" sizeof(shortType));
	printf("Size of int:%lu bytes\n" sizeof(intType));
	printf("Size of long:%lu bytes\n" sizeof(longType));
	printf("Size of float:%lu bytes\n" sizeof(floatType));
	printf("Size of float:%lu bytes\n" sizeof(floatType));
	return (0);
}
