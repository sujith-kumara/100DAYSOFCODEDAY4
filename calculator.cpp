#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    char op;
    cout<<"Enter the number 1 and number 2";
    cin>>num1>>num2;
    cout<<"Enter the operator for calculation";
    cin>>op;
      if(op== '+')
            cout<<num1<<" + "<<num2<<" = "<<num1+num2;
                
         else if(op=='-')
              cout<<num1<<" - "<<num2<<" = "<<num1-num2;
               
         else if(op=='*')
              cout<<num1<<" * "<<num2<<" = "<<num1*num2;
        else if(op=='/')
              cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        else
            cout<<"Error";
     
}