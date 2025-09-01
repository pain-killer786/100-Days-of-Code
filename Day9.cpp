//Write a program to check whether a number is armstrong or not.

#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int order(int x)
{
    int len = 0;
    while(x)
    {
        len++;
        x=x/10;
    }
    return len;
}

bool armstrong(int num, int len)
{
    int sum =0, temp, digit;
    temp=num;

    while(temp!=0)
    {
        digit=temp%10;
        sum=sum+ pow(digit,len);
        temp/=10;
    }
    return num==sum;
}

int main()
{
    int num,len;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    len= order(num);

    if(armstrong(num,len))
    {
        cout<<num<<"is Armstrong"<<endl;
    }
    else
    {
        cout<<num<<"is mot Armstrong"<<endl;
    }
    return 0;
}