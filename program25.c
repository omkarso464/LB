#include <stdio.h>
#include<stdlib.h> //exit success macro

int main()
{
    char sName[30]; //character array with limitation of 29(n-1) characters

    printf("Enter your name : \n");
    scanf("%s", sName); //dont have to use & because 

    printf("Welcome %s\n" , sName);

    return EXIT_SUCCESS;
}