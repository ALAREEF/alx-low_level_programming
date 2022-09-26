#include "main.h"
/**
 * _memcpy - copies memory area
 * @srs: memory area to copy from
 * @dest: memory area to copy to
 * @n : no of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int temp = *dest;
	*dest = *src;
	*src = temp;
	return (dest);
}


