## https://www.codechef.com/problems/COUNTP?tab=statement

#include<iostream>
using namespace std;

int main(){
    int tests;
    cin>>tests;
    for(int i=0;i<tests;i++){
        int n;
        cin>>n;
        int arr[n];
        bool flag=false;
        int odd_count=0;
        
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        for(int k=0;k<n;k++){
            if(arr[k]%2==1){
                flag=true;
                odd_count++;
            }
        }
        
        if(odd_count==0){
            cout<<"NO"<<endl;
        }
        
        else if(odd_count%2==0){
            cout<<"YES"<<endl;
        }   
        else{
            cout<<"NO"<<endl;
        }
        
        }
}
