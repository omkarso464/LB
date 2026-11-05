/*
        Input :     4
        Output :    A   B   C   D  
*/
// 0 -> 48 
// A -> 65
// a -> 97
// z -> 90
#include<stdio.h>
#include<stdlib.h>



// time Complexity : O(2N)
int main()
{
    int iCntr = 0; 

    for (iCntr = 'A'; iCntr <= 'Z'; iCntr++)
    {
        printf("%d\t%o\t%x\t%c\n", iCntr,iCntr,iCntr,iCntr);
    }
    EXIT_SUCCESS;
}