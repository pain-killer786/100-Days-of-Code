// Write a program to find the factors of a number. 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the value of num: "<<endl;
    cin>>num;
    cout<<"Factors of"<<num<<"Are: "<<endl;

    for(int i=1;i<=num;i++)
    {
        if(num%i ==0)
        {
            cout<<i<<" ";
        }
    }
}