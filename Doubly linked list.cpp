#include<iostream>
using namespace std;



class node{
    public:
    int id;
    node* next;
    node* prev;

    node(int x){
        id=x;
        next=NULL;
        prev=NULL;
    }

    
};

class dll{
    public:

    node* head;

    dll(){
        head=NULL;
    }

    void insert_at_end(int new_val);
   // void insert_at_position();
   void display_list();
   void delete_node(int id);
   
};

void dll::insert_at_end(int new_val){
    node *new_node;
    new_node= new node(new_val);

    node* temp=head;

    if(head==NULL){
        head=new_node;
        
    }

    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }

        temp->next=new_node;
        new_node->prev=temp;
    }

}

void dll::delete_node(int given_id){
    
    //case 1: empty list
    if(head==NULL){
        cout<<"Empty list"<<endl;
    }

    //ONly one node in list
    else if (head->next==NULL)
    {
       if( head->id==given_id){
        head=NULL;
        cout<<"deleted successfully"<<endl;
       }
       else{
        cout<<"Node not found"<<endl;
       }

    }

    //case 3: first node to be deleted, and more nodes exist
    else if(head->id==given_id){
        node* temp=head;
        head=temp->next;

        head->prev=NULL;
        delete(temp);
    }



    //case 4: more than one node in list
    else {
        node *q= head;
        //node *p=head->prev;
        //node *r=head->next;


        while(q!=NULL){
            if(q->id==given_id){
                //matching node found


                if(q->prev){
                    //(if there is a node before q )
                    (q->prev)->next=q->next;

                }

                if(q->next){
                    //there exists a node after q

                    (q->next)->prev=q->prev;
                }

                delete(q);
                break;
            }

            q=q->next;
        }

    }


}

void dll::display_list(){
    if(head==NULL){
        cout<<"Empty list"<<endl;
    }

    else{
        node* temp=head;
        cout<<temp->id<<endl;
        while(temp->next!=NULL){
            cout<<temp->next->id<<endl;;
            temp=temp->next;

        }
    }
}



int main(){
    dll l1;


    int choice;
    do{
        cout<<"enter choice"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            {
            //insert
            int id;
           cout<<"entrr id"<<endl;
           cin>>id;

           l1.insert_at_end(id);

            
            
            
            break;
            }

            case 2:
            {
                l1.display_list();
                break;
            }

            case 3:
            {
                cout<<"Enter id todelete"<<endl;
                int id;
                cin>>id;
                l1.delete_node(id);
                break;
                
            }

            
            
        }
    }while(choice!=0);
}
