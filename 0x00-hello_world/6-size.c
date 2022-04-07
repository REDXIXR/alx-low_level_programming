#include <stdio.h>
/**
*main - entry point
*
*Return Always 0 (Success)
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

Printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
Printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(a)); 
Printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
Printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
Printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
