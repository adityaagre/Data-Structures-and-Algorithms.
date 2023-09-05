#include<iostream>
using namespace std;

// Here is the most optimized algorithm for gcd based on Euclidean theorem
// Euclidean Theorem: GCD(a,b) = GCD(a-b, b)
int gcd_hcf_best(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return gcd_hcf_best(b, a%b);
    }
    
}

//LCM
// a*b = GCD(a,b) * LCM(a,b)
int LCM_best(int a, int b)
{
    return((a*b) / gcd_hcf_best(a,b));
}


/*
// This is also based on euclidean theorem but isnt as optimised
int gcd_hcf_basic(int n1, int n2)
{
    while(n1 != n2)
    {
        if(n1 > n2)
        {
            n1 = n1 - n2;
        }

        else
        {
            n2 = n2 - n1;
        }
    }

    return n1;
}

*/

/*
int lcm(int x, int y)
{
    int bada, chhota;
    if(x>y)
    {
        bada=x;
        chhota =y;
    }
    else
    {
        bada=y;
        chhota=x;
    }
    
    
    if(bada%chhota == 0)
    {
        return bada;
    }

}

*/


int main()
{
    cout<<(LCM_best(12,23));
    cout<<(gcd_hcf_best(12, 64));

}
