#ifndef HOLBERTON_H_INCLUDED

#define HOLBERTON_H_INCLUDED

Int _putchar(char);

Void print_alphabet(void);

Void print_alphabet_x10(void);

Int _islower(int c);

Int _isalpha(int c);

Int print_sign(int n);

Int _abs(int);

Int print_last_digit(int);

Void jack_bauer(void);

Void times_table(void);

Int add(int a, int b);

Void print_to_98(int n);

Void print_times_table(int n);

Void num(int r, int n);

#endif

_putchar copy it below

#include <unistd.h>

/**

* _putchar – writes the character c to stdout

* @c: The character to print
* *

* Return: On success 1.

* On error, -1 is returned, and errno is set appropriately.

*/

Int _putchar(char c)

{

Return (write(1, &c, 1));
}
