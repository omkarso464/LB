#include <stdio.h>
#include <stdlib.h>


int SumFactors(int iNo)
{
    int iCntr = 0 , iSum = 0 ;
    
    for(iCntr = 1 ; iCntr <= iNo/2 ; iCntr ++)
    {
       if (iNo % iCntr == 0)
       {
        iSum = iSum + iCntr ;
       }
    }
    return iSum;
}

int main()
{
    int iValue = 0 , iRet = 0;
    

    printf("Enter number : \n");
    scanf("%d", &iValue);
    
    iRet = SumFactors(iValue);

    printf("Summation of Factors %d \n", iRet);
    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)

