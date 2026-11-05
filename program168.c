// 8967 -> 6 and 8

#include <stdio.h>
#include <stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    float fAvg = 0.0f;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + iDigit;
        iCount++;
    
        iNo = iNo / 10 ;

        fAvg = (float)iSum / (float)iCount;

    }
    return fAvg;
}



int main()
{
    int iValue = 0;
    float fRet = 0;

     
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);


    printf("Average of Digits: %f\n", fRet );

    return EXIT_SUCCESS;
}