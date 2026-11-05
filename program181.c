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
    int iValue = 0;

    printf("Enter Frequency : \n");
    scanf("%d", &iValue);

    Pattern(iValue);
    return EXIT_SUCCESS;
}

