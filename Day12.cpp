// Write a program to find the factorial of a number.

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    int fact=1;

    if(num<0)
    {
        cout<<"Not possible"<<endl;
    }
    else{
        for(int i=1;i<=num;i++)
        {
            fact=fact*i;
        }
    }
    cout<<"Fact"<<num<<": "<<fact;
}
