

#include <stdio.h>
#include <stdlib.h>




int main()
{
    int iValue = 0 ;
    int iCntr = 0 ;

    printf("Enter number : \n");
    scanf("%d", &iValue);
    
    for(iCntr = 1 ; iCntr <= iValue ; iCntr ++)
    {
        printf("%d\n" , iCntr);
    }
    

    return EXIT_SUCCESS;
}