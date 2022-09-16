#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - Entry point
 *
 * Return (0)
 */
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	{
		char alphabet;
				for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
					putchar(alphabet);
	}
		putchar('\n');
		return (0);
}
