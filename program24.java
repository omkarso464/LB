import java.util.Scanner; //write as per use 
//performing coding in java basics -> Good way of programming 
class program24 
{
 public static void main(String A[])
 {
    Scanner scanner = null ;     
    String sName = null ;     

    //once we declare the class and object we dont have to declare repetadly next 
    scanner = new Scanner(System.in); 
    
    System.out.println("Enter your name : ");
    sName = scanner.next();  //only first name without space 

    System.out.println("Welcome " + sName);


 }   
}
