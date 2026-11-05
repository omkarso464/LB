/*
    ---------------------------------------------------
                Operation &&
    ---------------------------------------------------
    Result1     Result2     Final Result
    ---------------------------------------------------
    TRUE        TRUE        TRUE
    TRUE        FALSE       FALSE
    FALSE       TRUE        FALSE       Shortcircuit Evaluation
    FALSE       FALSE       FALSE       Shortcircuit Evaluation
    ---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>


void CheckDivisible(int iNo)
{
    // Logic

    if (iNo % 3 == 0)
    {
        if ((iNo % 5) == 0)
        {
        printf("Number is Divisible by 3 and 5 both\n");
        }
        else
        {
            printf("It is not divisible\n");
        }
    }
    else{
        printf("Number is not divisible by 3 and 5 \n");
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