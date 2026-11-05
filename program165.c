// 8967 -> 6 and 8

#include <stdio.h>
#include <stdlib.h>


void DisplayDigits(int iNo)
{
    int iDigits = 0;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }


    while(iNo != 0)
    {
        iDigits = iNo % 10;

        if((iDigits % 2) == 0)
        {
            printf("Even : %d\n", iDigits);
        }
        else
        {
            printf("Odd : %d\n", iDigits);
        }

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