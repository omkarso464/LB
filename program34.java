// Approach 2 
// Error

import java.util.Scanner; //write as per use 
//performing Addition of 2 numbers in java basics -> 
class program34 
{
    public int Addition(int iNo1, int iNo2 )
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
 public static void main(String A[])
 {
    Scanner scanner = null ; 
    int iValue1 = 0 , iValue2 = 0, iResult = 0;

    scanner = new Scanner(System.in); 

    System.out.println("Enter first number: ");
    iValue1 = scanner.nextInt();
    
    System.out.println("Enter first number: ");
    iValue2 = scanner.nextInt();

    iResult = Addition(iValue1, iValue2);       //Business Logic 

    System.out.println("Addition is :" +iResult);
    
    

 }   
}
