#include <stdio.h>
int main(void)
{
/* Declare a variable and initialize it with the first member of 
the range [a - z] 
*/
char alphabet = 'a';
/* check to see if the current value of your variable is less than or the same as the last member (z) of the given range. While the value is less, go ahead and print the value 
*/
while (alphabet <= 'z')
{
// print the value of the variable 
putchar(alphabet)
// increment the variable (ie: a becomes b)
alphabet++;
}
putchar('\n');
return (0);
}


