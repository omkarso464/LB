/*
        Input :     4
        Output :    0   1   2   3   4   
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCntr = 0;

    for(int iCntr = 0 ; iCntr <= iNo ; iCntr++)
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