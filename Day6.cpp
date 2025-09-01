// Write a program to check whether a year is leap year or not

#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the year"<<endl;
    cin>>year;
    if (year%400 == 0)
    {
        cout<<year<<" is a Leap Year";
    }
    else if(year%4 == 0 && year %100!=0)
    {
        cout<<year<<" is a Leap Year"<<endl;        
    }
    else
    {
        cout<<year<<" is not a Leap Year"<<endl;
    }
    return 0;
}