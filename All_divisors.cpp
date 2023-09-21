#include<iostream>
using namespace std;
#include<vector>
#include<math.h>

vector<int> all_divisors(int n)
{
    vector<int> ans_array;
    int i;
    for (int i =1; i*i<n; i++)
    {
        if (n % i == 0) 
            //cout<<i<<endl;
            ans_array.push_back(i);
    }

    for(int i = sqrt(n); i>1; i--)
    {
        if (n % i == 0) 
            //cout<<(n/i)<<endl;
            ans_array.push_back(n/i);
    }

    // We could have printed both i and n/i as divisors- 
    // -in the same loop but then we wont have them in sequence 
    // So, we are running two loops.

    return ans_array;
    

        



}

int main()
{
    vector<int> divisors_array = all_divisors(100);
    for(auto i : divisors_array )
    {
        cout<<i<<endl;
    }
}