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
void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node*reverse(node*&head,int k){
    if(head==NULL){
        return NULL;
    }
    node*curr=head;
    node*prev=NULL;
    node*front=NULL;
    int cnt=0;
    while(curr!=NULL && cnt<k){
        front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
        cnt++;
    }
    if(front!=NULL){
        head->next=reverse(front,k);
    }
    return prev;
}
int main(){
    node*n1=new node(1);
    node*head=n1;
    node*tail=n1;
    print(head);
    insert_at_tail(tail,2);
    insert_at_tail(tail,3);
    insert_at_tail(tail,4);
    insert_at_tail(tail,5);
    print(head);
    node*temp=reverse(head,3);
    print(temp);
    return 0;
}