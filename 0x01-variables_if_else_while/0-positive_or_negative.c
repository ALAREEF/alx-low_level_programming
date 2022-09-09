#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d \n", n);
/* our own code  will go here*/
if (n > 0)
{
printf("The number is positive \n");
}
else if (x < 0)
{
printf("The number is negative \n");
}
else
{
printf("The number is zero \n");
}
return (0);
}
