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
void insert(node*&head,node*&tail,int data){
    if(head==NULL){
        node*temp=new node(data);
        head=tail=temp;
    }
    else{
        node*temp=new node(data);
        tail->next=temp;
        tail=temp;
    }
}
node*mid(node*head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node*head=NULL;
    node*tail=NULL;
    insert(head,tail,1);
    insert(head,tail,2);
    insert(head,tail,3);
    insert(head,tail,4);
    print(head);
    cout<<endl;
    node*middle=mid(head);
    cout<<middle->data;
    return 0;
}