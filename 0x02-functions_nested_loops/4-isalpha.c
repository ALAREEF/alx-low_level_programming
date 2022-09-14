#include "main.h"

/**
 * _isalpha - Used to check for alphabetic characters
 * @c: an input character
 * Description: This program uses returns 1 if character is a
 * lowercase or uppercase letter
 * Return: return 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
