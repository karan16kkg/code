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
void insert_tail(node*&tail,int data){
    node*temp=new node(data);
    tail->next=temp;
    tail=temp;
}
node*middle(node*&head){
    node*fast=head;
    node*slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
node*mergesort(node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node*mid=middle(head);
    node*left=head;
    node*right=mid->next;
    mid->next=NULL;

    left=mergesort(left);
    right=mergesort(right);

    node*result=merge(left,right);
    return result;
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
    node*n1=new node(1);
    node*head=n1;
    node*tail=n1;
    insert_tail(tail,2);
    insert_tail(tail,3);
    insert_tail(tail,4);
    insert_tail(tail,5);
    print(head);
    node*temp=middle(head);
    cout<<temp->data<<endl;
    node*left=head;
    node*right=temp->next;
    temp->next=NULL;
    print(left);
    print(right);
    return 0;
}