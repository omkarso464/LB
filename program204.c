/*
        Input :     4
        Output :    a   b   c   d
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCntr = 0;
    char ch = '\0';

    for(iCntr = 1,  ch = 'a'; iCntr <= iNo; iCntr++,ch++)
    {
        printf("%c\t", ch );
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