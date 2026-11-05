/*
        Input :     6
        Output :    1   2   3   4   5   6
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCntr = 0;

    for(int iCntr = 1 ; iCntr <= iNo ; iCntr++)
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