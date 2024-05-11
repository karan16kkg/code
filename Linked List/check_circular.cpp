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

void insert_at_tail(node*tail,int data){
    node*temp=new node(data);
    tail->next=temp;
    temp=tail;
}

void insert_circular(node*&tail,int data,int element){
    if(tail==NULL){
        node*temp=new node(data);
        tail=temp;
        temp->next=temp;
    }
    else{
        node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        node*temp=new node(data);
        temp->next=curr->next;
        curr->next=temp;
    }

}

bool check(node*tail){
    if(tail==NULL){
        return NULL;
    }
    node*temp=tail->next;
    while(temp!=NULL && temp!=tail){
        temp=temp->next;
    }
    if(temp==tail){
        return true;
    }
    else{
        return false;
    }


}

void print_circular(node*tail){
    node*temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
        cout<<endl;
    
}



void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    // node*n1=new node(5);
    // node*head=n1;
    // node*tail=n1;
    // print(head);
    // insert_at_tail(tail,10);
    // print(head);

    node*tail=NULL;
    insert_circular(tail,5,2);
    // print_circular(tail);
    insert_circular(tail,10,5);
    print_circular(tail);
    cout<<check(tail);
    return 0;
}