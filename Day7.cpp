// Write a code to find the prime numbers between two numbers. 

#include<iostream>
using namespace std;

bool isPrime(int n)
{
    int count =0;

    if(n<2)
    {
        return false;

        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int lower, upper;
    cout<<"Enter the lower limit"<<endl;
    cin>>lower;
    cout<<"Enter the upper limit"<<endl;
    cin>>upper;
    for(int i = lower;i<=upper;i++)
    if(isPrime(i)== true)
    {
        cout<<i<<" ";
    }
}