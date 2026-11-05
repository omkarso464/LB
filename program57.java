import java.util.Scanner;

class program57 
{
    public void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0;


        Iteration iteration = new Iteration(); //Created object 

        System.out.println("Enter the frequency : ");

        iValue = scanner.nextInt();

        iteration.Display(iValue);                   // Calling Object instyead of class 

    }
}

class Iteration
{
    public void Display(int iNo) 
    {
       int iCntr = 0;

       for( iCntr = 1 ; iCntr <= iNo ; iCntr++)
       {
        System.out.println("Jay Ganesh");
       }
    }
}

