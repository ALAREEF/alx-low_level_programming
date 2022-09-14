#include <stdio.h>
#include <stdlib.h>
#include <time.h>
print_alphabet(void);
{
//decalre a variable char alphabet;
char alphabet;
for(alphabet = 'a'; alphabet <='z'; alphabet++)
{
//print the value of the variable
putchar(alphabet);
}
putchar('\n');
return (0);
}
