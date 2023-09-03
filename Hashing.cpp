#include<iostream>
using namespace std;

class emp{
    int id;
    string name;

    public:
    emp(){

    }
    emp(int id, string name){
        this->id=id;
        this->name=name;
    }

    int return_id(){
        return id;
    }

    void show(){

    }

};

void insert(int array, int val, emp* new_node, int orig_key, int new_key , int size){
    if(hash_key(new_key+1, size )==orig_key){
        cout<<"Cant store"<<endl;
    }

    else{
        if(!array[new_key]){
            array[new_key]=new_node;
        }
    }


}

int hash_key(int id, int size){
    return (id % size);

}

void f1(int *array_ptr, int size){
    for(int *i=array_ptr; *i; i++){
        cout<<*(i)<<endl;
    }
}



int main(){
    cout<<"Enter number of employees:   "<<endl;
    int n;
    cin>>n;

    emp *hash_table[n];
    for(int i =0; i<n; i++){
        hash_table[i]=NULL;
    }

    for(int i =0; i<n; i++){
        cout<<"Enter emp id and name"<<endl;
        int id;
        cin>>id;
        string name;
        cin>>name;

        emp* new_node= new emp(id, name);

        int hashkey= hash_key(id, n);

        insert(hash_table, id, new_node, hashkey, hashkey, n);

    }



  

    

    


    

    for(int i=0; i<n; i++){
        cout<<"Enter name and id: "<<endl;
        int id;
        string name;
        cin>>name>>id;


       emp *x= new emp(id, name);

       
    }



   


}
