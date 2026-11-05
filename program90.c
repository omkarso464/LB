#include <stdio.h>
#include <stdlib.h>


int summation(int iNo)
{
    int iCntr = 0 , iSum = 0;

    for(iCntr = 1 ; iCntr <= iNo ; iCntr ++)
    {
        iSum = iSum + iCntr;
    }

    return iSum ; 
    
}

int main()
{
    int iValue = 0 , iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d", &iValue);
    
    iRet = summation(iValue);
    printf("Summation is : %d\n", iRet);
    return EXIT_SUCCESS;
}