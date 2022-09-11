#include <stdlib.h>
#include <time.h>
/* more headersgoes here */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry point
 * Description: Get a random number and print the last digit
 * of the  number and if it is positive, negative, or zero
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	/* your code goes there */
	if (m > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %i is %i and is 0\n", n, m);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
	return (0);
}
