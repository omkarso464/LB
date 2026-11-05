/*
    ---------------------------------------------------
                Operation ||
    ---------------------------------------------------
    Result1     Result2     Final Result
    ---------------------------------------------------
    TRUE        TRUE        TRUE        Shortcircuit Evaluation
    TRUE        FALSE       TRUE        Shortcircuit Evaluation
    FALSE       TRUE        TRUE       
    FALSE       FALSE       FALSE     
    ---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>


void CheckDivisible(int iNo)
{
    // Logic

    if (((iNo % 5 == 0) || (iNo % 3 == 0)))
    {
        printf("Number is Divisible by 3 or 5\n");
    }
    else{
        printf("Number is not divisible\n");
    }

}
int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d", &iValue);
    
    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}