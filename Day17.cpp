// Write a program to check whether a number is perfect number. (a perfect number is a positive number that is equal to the sum of all its divisors(excluding itself) excluding itself)

#include <iostream>
using namespace std;

int main ()
{
    int n = 28, sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0)
            sum = sum + i;
    }
    if(sum == n)
    cout << n << " is a perfect number";
    else
    cout << n << " is not a perfect number";
}