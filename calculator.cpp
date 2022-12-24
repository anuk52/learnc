#include<iostream>
using namespace std;
int main ()
{
    float num1,num2,result;
    char cal;

    cout<<"Enter first number = ";
    cin>>num1;
    cout<<"Enter second number = ";
    cin>>num2;
    cout<<"Enter third number : ";
    cin>>cal;


    switch(cal)
    {
        case '+' :
        result=num1+num2;
        cout<<result;
        break;

        case '-' :
        result=num1-num2;
        cout<<result;
        break;

        case '*' :
        result=num1*num2;
        cout<<result;
        break;

        case '/' :
        result=num1/num2;
        cout<<result;
        break;

        default :
         cout<<"invalid operation";

    }


    return 0;
    
}