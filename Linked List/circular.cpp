#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insert(node*&tail,int element,int data){
    if(tail==NULL){  //for empty linked list
        node*temp=new node(data);
        tail=temp;
        temp->next=temp;
    }
    else{  //for insertion at any position
        node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        node*temp=new node(data);
        temp->next=curr->next;
        curr->next=temp;

    }
}

void delete_node(node*&tail,int element){
    node*curr=tail;
    node*prev=NULL;
    while(curr->data!=element){
        prev = curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
void print(node*tail){  //printing the circular linked list
    node* temp=tail;  //store the position of tail
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
        
    }
    while(tail!=temp);
    cout<<endl;
}
int main(){
    //node*n1=new node(10);
    node*tail=NULL;

    insert(tail,10,15);
    print(tail);
    insert(tail,15,20);
    print(tail);
    insert(tail,20,25);
    print(tail);
    delete_node(tail,20);
    print(tail);
    return 0;
}