#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ULONG; //macro should be capital land typedef also;

ULONG factorial(int iNo)
{
    int iCntr = 0 ; 
    ULONG iFact = 0;

    for(iCntr = 1 , iFact = 1; iCntr <= iNo ; iCntr ++)
    {
        iFact = iFact * iCntr;
    }

    return iFact ; 
    
}

int main()
{
    int iValue = 0 ;
    ULONG iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d", &iValue);
    
    iRet = factorial(iValue);
    printf("facrorial is : %lld\n", iRet);
    return EXIT_SUCCESS;
}