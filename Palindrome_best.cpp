// Palindrome checking for an integer function
// Complexity proportional to (number of dgits)
// Palindrome function returns boolean value and accepts integer


#include<iostream>
using namespace std;

bool palindrome(int n)
{
    int temp = n;
    int reverse = 0;

    while(temp > 0)
    {
        int last = temp%10;
        reverse = reverse * 10 + last;
        temp = temp/10;
    }
    //cout<<reverse;
    if(reverse == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    bool x = palindrome(3);
    cout<<(x);
}