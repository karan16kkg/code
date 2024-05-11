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

void insert_at_tail(node*&tail,int data){
    node*temp=new node(data);
    tail->next=temp;
    tail=temp;
}

node* reverse(node* head){
    // node*temp=head;
    node*prev=NULL;
    node*curr=head;
    node*front=NULL;
    while(curr!=NULL){
        front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    head=prev;
    return prev;
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
    node *n1=new node(5);
    node*head=n1;
    node*tail=n1;
    print(head);
    insert_at_tail(tail,10);
    print(head);
    insert_at_tail(tail,15);
    print(head);
    insert_at_tail(tail,20);
    print(head);
    reverse(head);
    print(head);
    return 0;
}