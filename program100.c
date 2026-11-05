#include <stdio.h>
#include <stdlib.h>


void displayFactors(int iNo)
{
    int iCntr = 0 ;
    printf("Factors of %d are : \n ", iNo);

    for(iCntr = 1 ; iCntr < iNo ; iCntr ++)
    {
       if (iNo % iCntr == 0)
       {
        printf("%d ", iCntr);
       }
    }
    
}

int main()
{
    int iValue = 0 ;
    

    printf("Enter number : \n");
    scanf("%d", &iValue);
    
    displayFactors(iValue);
    return EXIT_SUCCESS;
}

// Time Complexity : O(N)