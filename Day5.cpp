// Write a program to find the greates of two numbers 

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    if(a>b)
    {
        cout<<a<<" is greatest"<<endl;
    }
    else
    {
        cout<<b<<" is greatest"<<endl;
    }
    return 0;
}