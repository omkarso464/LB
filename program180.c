// * * * * *

#include <stdio.h>
#include <stdlib.h>


void Pattern(int iNo)
{
    int iCntr = 0;

    for (iCntr = 1; iCntr <= iNo; iCntr++)
    {
        printf("*\t") ;
    }

    printf("\n");
}
int main()
{

    Pattern(7);
    return EXIT_SUCCESS;
}

