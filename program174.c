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

float AverageDigits(int iTotal, int iFrequency)
{
    float fAns = 0.0f;

    fAns = (float)iTotal / (float)iFrequency;

    return fAns;
}

int main()
{
    int iValue = 0, iSum = 0, iCount = 0;
    float fAvg = 0;

     
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    
    iSum = SumDigits(iValue);
    iCount = CountDigits(iValue);
    

    fAvg = AverageDigits(iSum, iCount);

    printf("Number of digits : %d\n ", iCount);
    printf("Summation of Digits : %d\n ", iSum);
    printf("Average of Digits: %.2f\n", fAvg );     //%.2f --> only 2 digits after point

    return EXIT_SUCCESS;
}

