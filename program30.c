#include <stdio.h>
#include<stdlib.h> //exit success macro

//Issue -> program not getting whole name 

int main()
{
    char sName[30]; //character array with limitation of 29(n-1) characters
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name : \n");
    scanf("%[^'\n']s", sName); //Enter remains in input buffer
    // Special Scanf [^'\n'] this is the process known as accept the input until user clicks enter 
    //name of array internally holds array so no need to use & before sName 

    printf("Enter your age : \n");
    scanf("%d",&iAge);

    printf("Enter your Marks : \n");
    scanf("%f",&fMarks);
    

    printf("Welcome %s\n" , sName);
    printf("Your age is : %d\n", iAge);
    printf("Your Marks : %f\n", fMarks);
    
    return EXIT_SUCCESS;
}