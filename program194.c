/*
        Input :     4
        Output :    A   B   C   D  
*/
// 0 -> 48 
// A -> 65
// a -> 97
#include<stdio.h>
#include<stdlib.h>



// time Complexity : O(2N)
int main()
{
    int iCntr = 0; 

    for (iCntr = 97; iCntr <= 122; iCntr++)
    {
        printf("%c\n", iCntr);
    }
    EXIT_SUCCESS;
}