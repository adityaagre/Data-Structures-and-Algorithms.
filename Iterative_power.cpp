#include<iostream>
using namespace std;

int iterative_power_binary_exponentiation(int base, int power)
{
    int result = 1;
   
    while(power>0)
    {
        if(power%2 != 0)
        {
            result *= base;
        }

        base = base * base;
        power = power >> 1;

    }

    return result;
}

int main()
{
    cout<<iterative_power_binary_exponentiation(4, 4);
}

