// Write a program to convert octal numbers to decimal numbers

#include<iostream>
#include<math.h>
using namespace std;
int getOctal(long long num)
{
int i = 0, decimal = 0;
int base = 8;
while (num!=0)
{
int digit = num % 10;
decimal += digit * pow(base, i);num /= 10;
i++;
}
return decimal;
}
// main program
int main()
{
long long octal = 462;
cout << getOctal(octal);
return 0;
}