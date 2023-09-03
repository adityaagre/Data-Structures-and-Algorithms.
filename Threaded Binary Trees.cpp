#include<iostream>
using namespace std;
#include<vector>

class node{
public:
	int data;
	node* right;
	node* left;
    int rflag, lflag;
    
	node(int k){
    	right=NULL;
    	left=NULL;
        rflag=0;
        lflag=0;
    	data=k;
	}
    
    
    
	void show(){
    	cout<<data<<endl;
	}
};

vector<node*> v1;

node* insert(node *head, node *new_address, int val, node *new_node){
    
    
	//case where tree is empty
	if(head==NULL){
    	head=new_node;
   	 
	}
    
	//tree is not empty
	else{
    
	// if our number is smaller than current node
	// we go to left
	if(new_address->data>val){
    	if(new_address->left==NULL){    	//going to the end(leaf node)
        	new_address->left=new_node; 	//and then adding new node
            new_address->lflag=1;


    	}
   	 
    	else{
        	insert(head, new_address->left, val, new_node);
        	// if the cuurent node (root) isnt a leaf node
        	// pass the next left node recursively to insert
    	}
	}
    
	// if our number is greater than current node(root)
	// we go to right
	if(new_address->data<val){
    	if(new_address->right==NULL){   	//going to the end(leaf node)
        	new_address->right=new_node;	//and then adding new node
            new_address->rflag=1;
    	}
   	 
    	else{
        	insert(head, new_address->right, val, new_node);    
        	// if the cuurent node (root) isnt a leaf node
        	// pass the next right node recursively to insert
    	}
	}
    
    
}
	return head;
}



void inorder(node *head){
    
    
	//Left subtree
	if(head->left!=NULL){
    	//recursively passing left subtree
    	inorder(head->left);
	}
    
	// current root
	head->show();
    v1.push_back(head);
    
	//right subtree
	if(head->right!=NULL){
        	//recursively passing right subtree
        	inorder(head->right);
    	}}







int main(){
cout<<"Enter number of nodes in tree"<<endl;
int N;
cin>>N;

node* head= NULL;



for(int i=0; i<N; i++){
    cout<<"Enter data of node:  "<<endl;

    int data;
    cin>>data;

    node* nn= new node(data);

    head=insert(head, head, data, nn);
}

inorder(head);

vector<node*> ::iterator ptr;

for(ptr=v1.begin(); ptr<v1.end(); ptr++){
    cout<<(*ptr)->data;
}





}
