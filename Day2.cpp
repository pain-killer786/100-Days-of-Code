// Write a program to check whether a number is even or odd.

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout <<"Enter a number"<<endl;
    cin>>num;
    if (num%2==0)
    {
        cout <<"Even"<<endl;
    }
    else
    {
        cout <<"Odd"<<endl;
    }
    return 0;
}