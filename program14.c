#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
//////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0; 
    
    printf("Enter first number :\n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr, "INPUT IS INVALID\n");

        return EXIT_FAILURE;
    }

    printf("Enter second number :\n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr, "INPUT IS INVALID\n");

        return EXIT_FAILURE;
    }
    
    iResult = Addition(iValue1, iValue2);
    printf("Addition is : %d\n",iResult);
    
    return EXIT_SUCCESS; //returns success to the operating system (instead of 0 you can write EXIT_SUCCESS)
    //
}

