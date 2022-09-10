#include <stdlib.h>
#include <time.h>
/* more headersgoes here */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry point
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero", n);
	return (0);
}
