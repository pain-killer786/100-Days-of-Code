//Write a program to reverse a number. 

#include<iostream>
using namespace std;

int main()
{
    int num, reverse = 0, rem;
    num= 1234;
    cout<<"The number is"<<num<<endl;

    while(num!=0)
    {
        rem = num%10;
        reverse= reverse*10 + rem;
        num/=10;
    }

    cout<<"Reversed number:"<<reverse<<endl;

    return 0;
}