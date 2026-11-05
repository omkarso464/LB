/*
        Input :     4
        Output :    4   3   2   1   0  
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCntr = 0;

    for(int iCntr = iNo ; iCntr >= 0 ; iCntr--)
    {
        printf("%d\t" , iCntr);
    }

    printf("\n");
}

int main()
{
    int iValue = 0 ;

    printf("Enter the Value : \n");
    scanf("%d" ,&iValue);

    Pattern(iValue);

    EXIT_SUCCESS;
}