class program55 
{
    
    public void main(String A[])
    {
        Iteration iteration = new Iteration(); //Created object 

        iteration.Display();                   // Calling Object instyead of class 

    }
}

class Iteration
{
    public void Display() 
    {
       int iCntr = 0;
       for( iCntr = 1 ; iCntr <=4 ; iCntr++)
       {
        System.out.println("Jay Ganesh");
       }
    }
}

