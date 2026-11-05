#include<stdio.h>
#include<stdlib.h>

//97 --> 122

int CountCapitalX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
        iCount++;
        }
        str++;

    }

    return iCount;
}


int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapitalX(Arr);

    printf("Frequency of Capital letters : %d\n" , iRet);


    return EXIT_SUCCESS;
}

