#include <stdio.h>
#include <stdlib.h>


void CheckPerfect(int iNo)
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
        printf("It is Perfect Number\n");
    }
    else{
        printf("It is not a perfect number\n");
    }

}

int main()
{
    int iValue = 0 ;
    

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckPerfect(iValue);

    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)

