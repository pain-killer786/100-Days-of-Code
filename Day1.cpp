// Given an integer input. The objective is to write a code to check if a number is positive, negative or zero.

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout <<"Enter a number"<<endl;
    cin >>a;
    if (a>0)
    {
        cout << "Positive" << endl;
    }
    else if (a < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }
    return 0;  
}
