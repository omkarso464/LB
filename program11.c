#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no = 0;

    printf("Enter number: \n");
    if(scanf("%d" , &no) != 1)
    {
        printf("INVALID INPUT\n"); //stdout (Standard Output on console)

        return EXIT_FAILURE; //returns -1 value (Exit Macro)
    }
    printf("INPUT IS VALID\n");

    return EXIT_SUCCESS;
}