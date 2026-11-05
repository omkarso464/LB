#include<stdio.h>
#include<stdlib.h>

void Display(char *str) //Pointer
{
    printf("%s\n",str);
}


int main()
{
    char Arr[100];

    prinf("Enter String:\n");
    Scanf("%[^'\n']s" , Arr);

    Display(Arr);       //Display (100)     

    return EXIT_SUCCESS;
}
