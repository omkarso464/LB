// * * * * *

#include <stdio.h>
#include <stdlib.h>


void Pattern()
{
    int iCntr = 0;

    for (iCntr = 1; iCntr <= 5; iCntr++)
    {
        printf("*\t") ;
    }

    printf("\n");
}
int main()
{
    Pattern();
    return EXIT_SUCCESS;
}

