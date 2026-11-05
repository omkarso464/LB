#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0, iRev = 0;
    int iTemp = 0;


    iTemp = iNo;

    while (iNo != 0)
    {

        iDigit = iNo % 10;
        
        iRev = (iRev * 10) + iDigit;

        iNo = iNo / 10;
    }

    if(iRev == iTemp)           //Issue Solved 
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;
     
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("Number is Pallindrome");
    }
    else
    {
        printf("Number is Not Pallindrome");
    }

    return EXIT_SUCCESS;
}

