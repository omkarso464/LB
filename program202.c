/*
        Input :     4
        Output :    A   B   C   D   
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCntr = 0;
    char ch = '\0';

    ch = 'A';

    for(iCntr = 1; iCntr <= iNo; iCntr++)
    {
        printf("%c\n", ch );
        ch++;
    }
   printf("\n");
}

// time Complexity : O(2N)
int main()
{
    int iValue = 0 ;

    printf("Enter the Value : \n");
    scanf("%d" ,&iValue);

    Pattern(iValue);

    EXIT_SUCCESS;
}