#include "main.h"
/**
 *_pow_recursion - function the value of x raised to the power of y
 *@x: An input integer
 *@y: An input integer
 *Return: -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
return (-1);
	}
if (y <=1)
{
return (x * y);
}
return (x * _pow_recursion(x, y - 1));
}
