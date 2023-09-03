// number_of_digits measures number of digits in an integer
// Complexity proportional to (number of dgits)
// accepts int and returns int.


#include<iostream>
using namespace std;

int number_of_digits(int n)
{
   
    int ans = 1;
    if(n==0)
    {
        return 0;
       
    }
         
    else 
    {
        
        ans = 0;

        while(n>0)
        {
            ans++;
            n = n/10;
         


        }
        return ans;
    }
        

    
    

    


}

int main()
{
    int n;
    cin>>n;
    int ans=number_of_digits(n);
    cout<<ans;
}
