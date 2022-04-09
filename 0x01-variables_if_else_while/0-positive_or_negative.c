#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point 
*
*Return: Always 0 (Success)
*/

int main(void)
{
int n;

$rand(time(0));
n = rand() - RAND_MAX / 2;

if (n==0)
{
printf("%i is zero\n", n);
}
else if (n<0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is positive\n", n);
}

return(0);

}
