#include <stdio.h>
#include "compare.c"

int main(void)
{
    int a = 10;
    int b = 4;
    printf("The biggest is: %d\n", biggest(a,b));
    printf("The smallest is: %d\n", smallest(a,b));
    return 0;
}