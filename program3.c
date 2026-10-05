/*
 Step 1 : understand the problem statement 
 Step 2 : write the algorithm 
 Step 3 : Decide the programming language 
 Step 4 : Write the program 
 Step 5 : Tets the program 
*/ 

//////////////////////////////////////////////////////////////
//
//  Step 1 : understand the problem statement 
//           User is going to enter any two integers
//           and we have to perform addition      
//
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Acccept first number as No1
        Acccept second number as No2
        Create the variable as Ans to store the result 
        Performthe addition and store into Ans 
        Display the result from Ans 
    END 
*/
//
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//
//  Step 4 : Write the program  
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iValue1 = 10, iValue2 = 11, iResult = 0; 
    // Variable naming Convention
    //variable should contains datatype prefix

    iResult = iValue1 + iValue2;  //Business Logic

    printf("%d\n",iResult);
    
    return 0; //returns success too the operating system 
}
