#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool CheckPerfect(int iNo)
{
    int iCntr = 0 , iSum = 0 ;
    
    for(iCntr = 1 ; iCntr <= iNo/2 ; iCntr ++)
    {
       if (iNo % iCntr == 0)
       {
        iSum = iSum + iCntr ;
       }
    }

    if(iSum == iNo)
    {
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    int iValue = 0 ;
    bool bRet = false ; 
    

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);

    if (bRet == true)
    {
        printf("It is perfect number\n");
    }
    else{
        printf("It is not a perfect number\n");
    }
    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)

