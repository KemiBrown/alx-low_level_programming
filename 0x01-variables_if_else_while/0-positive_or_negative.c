#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and check if it is positive,negative or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i n is positive \n", n);
	else if (n < 0)
		printf("%i n is negative \n", n);
	else
		printf("%i n is zero \n", n);
	return (0);
}
