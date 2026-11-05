#include <stdio.h>
#include <stdlib.h>


void DisplayDigits(int iNo)
{
    int iDigits = 0;

    

    while(iNo != 0)
    {
        iDigits = iNo % 10;

        printf("%d\n", iDigits);
        iNo = iNo/10 ; 
    }
}


int main()
{
    int iValue = 0;
     
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}