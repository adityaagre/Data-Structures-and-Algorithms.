#include<iostream>
using namespace std;
#include<vector>

vector<int> bit_repr_of_int(int n)
{
    vector<int> ans;
    while(n>0)
    {
        if(n%2 != 0)
        {
            ans.push_back(1);
        }
        else
        {
            ans.push_back(0);
        }

        n = n/2;
    }

    return ans;
}

int main()
{
    vector<int> bit_vector = bit_repr_of_int(63);

    int vecSize = bit_vector.size();
    vector<int>::iterator iter;
    
    for(iter = bit_vector.begin(); iter < bit_vector.end(); iter++)
    {
        cout << *iter << " ";
    }

    // This will print in opposite order

}