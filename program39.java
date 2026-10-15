// Approach 3 

import java.util.Scanner; //write as per use 
//performing Addition of 2 numbers in java basics -> 


class program39 
{
    
 public static void main(String A[])
 {
    Scanner scanner = null ; 
    Arithematic arithematic = null; //generated reference of Arithematic 
    int iValue1 = 0 , iValue2 = 0, iResult = 0;

    scanner = new Scanner(System.in); 

    System.out.println("Enter first number: ");
    iValue1 = scanner.nextInt();
    
    System.out.println("Enter first number: ");
    iValue2 = scanner.nextInt();

    arithematic =new Arithematic(); //created object

    iResult = arithematic.Addition(iValue1, iValue2);   // Added Class_Name.method_Name 

    System.out.println("Addition is :" +iResult);
    
    

 }   
}

class Arithematic
{
    public int Addition(int iNo1, int iNo2 ) 
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}