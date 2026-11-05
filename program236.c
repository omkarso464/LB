#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char Arr[10] = "Ganesh";

    char *ptr = NULL;

    ptr = &(Arr[0]);

    printf("%c\n" , *ptr);
    ptr++;
    printf("%c\n" , *ptr);
    ptr++;
    printf("%c\n" , *ptr);
    ptr++;
    printf("%c\n" , *ptr);
    ptr++;
    
    printf("Enter string is : %s\n", Arr);
    return EXIT_SUCCESS;

}
