//Write a program to find the LCM of two numbers.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1,num2,lcm;
    cout<<"Enter the value of num1: "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2: "<<endl;
    cin>>num2;
    int max=(num1>num2)?num1:num2;

    for(int i=max;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;
        }
    }
    cout<<"LCM of"<<num1<<"and"<<num2<<"is"<<lcm;
    return 0;
}