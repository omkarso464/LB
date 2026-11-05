#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void CheckPrime(int iNo)
{
    int iCntr = 0;
    int iSum = 0;

    for(iCntr = 1; iCntr <= iNo/2 ; iCntr++)
    {
        if (iNo % iCntr == 0)
        {
            iSum = iSum + iCntr;
        }
    }

    if(iSum == 1)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a Prime number");
    }

}


int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d" , &iValue);

    CheckPrime(iValue);

    return EXIT_SUCCESS;
}
