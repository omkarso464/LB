#include <stdio.h>
#include<stdlib.h> //exit success macro

//Issue -> program not getting whole name 

int main()
{
    char sName[30]; //character array with limitation of 29(n-1) characters

    printf("Enter your name : \n");
    scanf("%[^'\n']s", sName); // Special Scanf [^'\n'] this is the process known as accept the input until user clicks enter 
    
    

    printf("Welcome %s\n" , sName);

    return EXIT_SUCCESS;
}