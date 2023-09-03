// Factorial calculating function
// Complexity proportional to n
// takes int and returns int.
// ** Also gives corret factorial for zero.
// Iterative is considered better for factorial than recursive because both have 
// n order time comp but iterative has constant space complexity while recursive has
// n order space comp.


#include<iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for(int i =1; i<=n; i++)
    {
        ans = ans*i;
    }
    return ans;
}

int main()
{
    cout<<(factorial(10));
}