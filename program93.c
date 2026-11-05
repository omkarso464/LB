#include <stdio.h>
#include <stdlib.h>


long int factorial(int iNo)
{
    int iCntr = 0 ; 
    long int iFact = 0;

    for(iCntr = 1 , iFact = 1; iCntr <= iNo ; iCntr ++)
    {
        iFact = iFact * iCntr;
    }

    return iFact ; 
    
}

int main()
{
    int iValue = 0 ;
    long int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d", &iValue);
    
    iRet = factorial(iValue);
    printf("facrorial is : %ld\n", iRet);
    return EXIT_SUCCESS;
}