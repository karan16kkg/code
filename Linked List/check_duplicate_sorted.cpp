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
void insert(node*&tail,int data){
    if(tail==NULL){
        node*temp=new node(data);
        tail=temp;
    }
    node*temp=new node(data);
    tail->next=temp;
    tail=temp;
}

void delete_duplicate(node*&head){
    if(head==NULL){
        return;
    }
    node*temp=head;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }
    }
}
void print(node*head){
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
    print(head);
    insert(tail,2);
    insert(tail,2);
    insert(tail,3);
    print(head);
    delete_duplicate(head);
    print(head);
    return 0;
}