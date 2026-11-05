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
    char ch = '\0';

    for (ch = 'A'; ch <= 'D'; ch++)
    {
        printf("%c\n", ch);
    }
    EXIT_SUCCESS;
}