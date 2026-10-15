// Approach 3 

import java.util.Scanner; //write as per use 
//performing Addition of 2 numbers in java basics -> 


class program38 
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

    iResult = Arithematic.Addition(iValue1, iValue2);   // Added Class_Name.method_Name 

    System.out.println("Addition is :" +iResult);
    
    

 }   
}

class Arithematic
{
    public static int Addition(int iNo1, int iNo2 ) //added static (method becomes static so we dont wanat to call obj)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}