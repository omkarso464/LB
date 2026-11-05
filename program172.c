#include <stdio.h>
#include <stdlib.h>

int CountDigits(int iNo)
{
    int iDigits = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }


    while(iNo != 0)
    {
        iDigits = iNo % 10;
        iCount++;
        iNo = iNo/10 ; 
    }
    return iCount;
}


int SumDigits(int iNo)
{
    int iDigits = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }


    while(iNo != 0)
    {
        iDigits = iNo % 10;
        iSum = iSum + iDigits;
        iNo = iNo/10 ; 
    }
    return iSum;
}

float AverageDigits(int iNo)
{
    int iDigit = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iSum = SumDigits(iNo);
    iCount = CountDigits(iNo);
    

    fAvg = ((float)iSum / (float)iCount);

    return fAvg ;
}


int main()
{
    int iValue = 0;
    float fRet = 0;

     
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);


    printf("Average of Digits: %.2f\n", fRet );     //%.2f --> only 2 digits after point

    return EXIT_SUCCESS;
}