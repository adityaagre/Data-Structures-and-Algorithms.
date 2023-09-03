// T(n) = T(n -1) + 0(1)
// Recursive complexity
// Time complexity is still proportional to n
// Iterative is considered better for factorial than recursive because both have 
// n order time comp but iterative has constant space complexity while recursive has
// n order space comp.

#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n > 1)
    {
        int ans = n*factorial(n-1);
        return ans;
    }
    else
    {
        return 1;
    }
}
int main()
{
    cout<<(factorial(25));

}