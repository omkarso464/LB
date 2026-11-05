#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
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
        return true;
    }
    else
    {
        return false;
    }

}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d" , &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("It is Prime number");
    }
    else
    {
        printf("It is not a prime number");
    }

    return EXIT_SUCCESS;
}
