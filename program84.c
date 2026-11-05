#include <stdio.h>
#include <stdlib.h>


void CheckDivisible(int iNo)
{
    // Logic

    if ((iNo % 5 == 0))
    {
        printf("Number is Divisible by 3 \n");
    }
    else{
        printf("Number is not divisible by 3 \n");
    }

}
int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf(" %d ", &iValue);
    
    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}