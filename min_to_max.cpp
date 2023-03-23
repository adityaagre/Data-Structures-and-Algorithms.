## https://www.codechef.com/problems/OPMIN

#include <iostream>
using namespace std;

int main()
{
    int tests;
    cin>>tests;
    
    for (int test = 0; test< tests; test++)
    {
        int N;
        cin>>N;
        
        int array[N];
        
        for (int i=0; i<N; i++)
        {
            cin>>array[i];
        }
        
        int min = array[0];
        
        for(int i=0; i<N; i++)
        {
            if (array[i]<min)
            {
                min=array[i];
            }
        }
        
        int count = 0;
        
         for(int i=0; i<N; i++)
         {
             if (array[i]>min)
             {
                 count++;
             }
         }
         
         cout<<count<<endl;
        
        
        
        
    }
}
