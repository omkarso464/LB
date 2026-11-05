#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCntr = 0;
    bool bFlag = false;

    for(iCntr = 2, bFlag = true; iCntr <= iNo/2 ; iCntr++) //chage 1 to 2 
    {
        if (iNo % iCntr == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;                           // Added Flag register concept 
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d" , &iValue);

    bRet = CheckPrime(iValue);

    if(bRet)        //if bRet is true then it goes to If loop 
    {
        printf("It is Prime number");
    }
    else
    {
        printf("It is not a prime number");
    }

    return EXIT_SUCCESS;
}
