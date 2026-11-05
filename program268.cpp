#include<iostream>
using namespace std;

double Addition(double iNo1, double iNo2)
{
    double iAns = 0.0;
    
    iAns = iNo1 + iNo2;

    return iAns;

}

int main()
{
    double iValue1 = 0.0, iValue2 = 0.0;
    double iRet = 0.0;
  
    cout<<"Enter First number : \n";
    cin>>iValue1;

    cout<<"Enter Second number : \n";
    cin>>iValue2;

    iRet = Addition(iValue1, iValue2);

    cout<<"Addition is :"<<iRet<<"\n";

    return EXIT_SUCCESS;
}