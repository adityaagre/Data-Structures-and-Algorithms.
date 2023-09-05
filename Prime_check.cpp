#include<iostream>
using namespace std;

bool Prime_check(int x)
{
    if(x==1)
    {
        return false;
    }

    else
    {
        for(int i = 2; i*i <= x; i++)
        {
            if(x%i == 0)
            {
                return false;
                
            }

        }

        return true;
    }
}

int main()
{
    cout<<Prime_check(1);
}