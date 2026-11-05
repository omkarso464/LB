/*
        Input :     4
        Output :    A   B   C   D  
*/
// 0 -> 48 
// A -> 65
// Z -> 90
// a -> 97
#include<stdio.h>
#include<stdlib.h>



// time Complexity : O(2N)
int main()
{
    int iCntr = 0; 

    for (iCntr = 65; iCntr <= 90; iCntr++)
    {
        printf("%d\t%c\n", iCntr,iCntr);
    }
    EXIT_SUCCESS;
}