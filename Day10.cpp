// Write a progrma to find the HCF of two numbers

#include<iostream>
using namespace std;

int main()
{
    int num1,num2,hcf=1;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;

    for(int i=0;i<num1 || i<num2;i++)
    {
        if(num1%i ==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    cout<<"HCF of"<<num1<<"and"<<num2<<"is"<<hcf<<endl;
    return 0;
}