#include <stdio.h>
/**
*main - entry point
*
*Return Always 0 (Success)
*/
int main(void)
{

Printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
Printf("Size of a int: %d byte(s)\n", (unsigned long)sizeof(int)); 
Printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(long int));
Printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
Printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
