#include "main.h"
/**
 * _strncat - Concatenated a string with n bytes from src
 * @dest: String that receives the append
 * @src:String to be append
 * @n: Number of bytes to be append from src
 *
 * Return: dest (as a pointer).
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;
	while ((src + j < src + n) && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
