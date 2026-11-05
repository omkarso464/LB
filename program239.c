#include<stdio.h>
#include<stdlib.h>

void Display(char str[])    //arrray is treated as ptr
{
    printf("%s\n ", str);

}


int main()
{

    char Arr[] = "Ganesh";

    Display(Arr);

    return EXIT_SUCCESS;
}
