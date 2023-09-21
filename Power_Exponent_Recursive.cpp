// Given two numbers base and power, return base^power.

#include<iostream>
using namespace std;

int power(int base, int exponent)
{
    
    if (exponent<=1)
    {
        return base;
    }
    
    else if(exponent%2==0)
    {
        int halfway = power(base, exponent/2);
        
        return halfway * halfway;
    }
    else
    {
        int halfway = power(base, exponent/2);
        return halfway * halfway * base;
    }
}

int main()
{
    for (int exponent = 1; exponent<=25; exponent++)
    {
        cout<<power(2,exponent)<<endl;
    }
    
}