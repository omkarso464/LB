import java.util.Scanner; //write as per use 
//performing coding in java basics -> Good way of programming 
class program28 
{
 public static void main(String A[])
 {
    Scanner scanner = null ;     //
    String sName = null ;     
    int iAge = 0 ;              //have to write this to avoid runtime exeption 
    
    float fMarks = 0.0f;


    //once we declare the class and object we dont have to declare repetadly next 
    scanner = new Scanner(System.in); 
    
    System.out.println("Enter your name : ");
    sName = scanner.next();  //Execption //input buffer concept exeption
    //

    System.out.println("Enter Your age : ");
    iAge = scanner.nextInt();

    System.out.println("Enter your marks: ");
    fMarks = scanner.nextFloat();

    System.out.println("Welcome " + sName);
    System.out.println("Your age is:" +iAge);
    System.out.println("Your marks : " +fMarks);

 }   
}
