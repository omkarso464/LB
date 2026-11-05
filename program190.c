/*
        Input :     4
        Output :    -4   -3   -2   -1  
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCntr = 0;
    

    for(int iCntr = -iNo ; iCntr <= 0 ; iCntr++)    //  O(N)
    {
        printf("%d\t" , iCntr);
    }

     for(int iCntr = 1 ; iCntr <= iNo ; iCntr++)    //  O(N)
    {
        printf("%d\t" , iCntr);
    }

    printf("\n");
}

// Time Complexity : O(2N)

int main()
{
    int iValue = 0 ;

    printf("Enter the Value : \n");
    scanf("%d" ,&iValue);

    Pattern(iValue);

    EXIT_SUCCESS;
}
