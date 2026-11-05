#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital =0, iCountDigit = 0;

    while(*str != '\0')
    {

        if((*str >= 'a')&&(*str <= 'z'))
        {
            iCountSmall++;
        }
        else if ((*str >= 'A')&&(*str <= 'Z'))
        {
            iCountCapital++; 
        }
        else        //Issue
        {
             iCountDigit++;
        }
        str++;
    }
        printf("Small char count : %d\n", iCountSmall);
        printf("Capital char count : %d\n", iCountCapital);
        printf("Digits count : %d\n", iCountDigit);
}

int main()
{
    char Arr[100] = {'\0'};
    

    printf("Enter string:");
    scanf("%[^'\n']s", Arr);

    CountFrequencyX(Arr);


    return EXIT_SUCCESS;
}

