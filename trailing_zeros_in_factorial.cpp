#include<iostream>
using namespace std;

int func(int n)
{
    // Every number that is divisible by 5 will lead to a zero.
    // Because it will always have factors of 2 to get multiplied with.
    // Some numbers such as 25 carry two factors of 5
    // Time complexity is proportional to log(n)

    int ans=0;
    for (int i = 5; i <=n; i = i*5)
    {
        ans += n/i;
    }

    return ans;
}

int main()
{
    cout<<(func(625));
}