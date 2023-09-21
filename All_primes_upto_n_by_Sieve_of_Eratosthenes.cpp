// Sieve of eratosthenes method
// This gives you O(n.log.logn)


#include<iostream>
using namespace std;
#include<vector>

vector<int> all_primes_upto(int n)
{   
    bool Sieve_of_eratosthenes[n+1];
    // Making a bool array called sieve
    // If an index in this array holds true, it means-
    //-that index is prime.
    Sieve_of_eratosthenes[0] = false;
    Sieve_of_eratosthenes[1] = false;

    // We start off by making all indices from 3 to n as prime
    for(int index = 2; index<=n; index++)
    {
        Sieve_of_eratosthenes[index]=true;
    }

    // now we start serially from index 2 as it is prime
    // We mark all multiples of 2 as not prime
    // after thet we move on to the next number in the list-
    //-that has been marked as true. (3)
    // We repeat this till n

    for(int index = 2; index<=n; index++)
    {
        //cout<<"Checking "<<index<<endl;
        if(Sieve_of_eratosthenes[index]==true)
        {
            
            
            int multiple = index * index;
            // Here, we can start checking multiples of index as:
            // index*2,3,4,........ right?
            // But why did we start from index*index,index+1,index+2....?
            // fro instance, while checking for multiples of 5, 
            // we can start with 10,15,20,25,30.......
            // but we should omit 10,15,20, because, these have been covered as multiples-
            // -of 2,3,4 already.
            // we can start with 5*5
            // Therefore index*index 

            while(multiple<=n)
            {
                //cout<<"Looking at multiple "<<multiple<<endl;
                Sieve_of_eratosthenes[multiple] = false;
                
                multiple += index;
            }
        }
    }

    vector<int> prime_list;

    for(int index = 2; index<=n; index++)
    {
        if(Sieve_of_eratosthenes[index]==true)
            prime_list.push_back(index);
            

    }

    return prime_list;



}

int main()
{
    vector<int> prime_list = all_primes_upto(1000);

    int vecSize = prime_list.size();
    vector<int>::iterator iter;
    
    for(iter = prime_list.begin(); iter < prime_list.end(); iter++)
    {
        cout << *iter << endl;
    }
    


}