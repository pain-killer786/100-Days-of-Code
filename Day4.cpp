// Given two integer inputs num1 and num2, the objective is to write a code to find the sum of numbers in the given range.

#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    int sum=0;
    for (int i = num1; i <= num2; i++)
    {
        sum=sum+i;  
    }
    cout<<"The sum of numbers from "<<num1<<" to "<<num2<<" is "<<sum<<endl;
    return 0;
}