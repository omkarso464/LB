

#include <stdio.h>
#include <stdlib.h>


void display(int iNo)
{
    int iCntr = 0 ;
    for(iCntr = 1 ; iCntr <= iNo ; iCntr ++)
    {
        printf("%d\n" , iCntr);
    }
    
}

int main()
{
    int iValue = 0 ;
    

    printf("Enter number : \n");
    scanf("%d", &iValue);
    
    display(iValue);
    return EXIT_SUCCESS;
}