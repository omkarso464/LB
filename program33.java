// Approach 1 

import java.util.Scanner; //write as per use 
//performing Addition of 2 numbers in java basics -> 
class program33 
{
 public static void main(String A[])
 {
    Scanner scanner = null ; 
    int iValue1 = 0 , iValue2 = 0, iResult = 0;

    scanner = new Scanner(System.in); 

    System.out.println("Enter first number: ");
    iValue1 = scanner.nextInt();
    
    System.out.println("Enter first number: ");
    iValue2 = scanner.nextInt();

    iResult = iValue1 + iValue2 ;       //Business Logic 

    System.out.println("Addition is :" +iResult);
    
    

 }   
}
