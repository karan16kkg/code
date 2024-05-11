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

int length(node*&head){
    node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
int middle(node*&head){
    int len=length(head);
    int mid=len/2;
    int cnt=0;
    node*temp=head;
    while(cnt<mid){
        temp=temp->next;
        cnt++;
    }
    return temp->data;
}

int middle2(node*&head){
    node*fast=head;
    node*slow=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow->data;
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
    insert_at_tail(tail,2);
    insert_at_tail(tail,3);
    insert_at_tail(tail,4);
    print(head);
    // int len=length(head);
    // int mid=len/2;
    // int cnt=0;
    // node*temp=head;
    // while(cnt<mid){
    //     temp=temp->next;
    //     cnt++;
    // }
    // cout<<temp->data;
    cout<<middle(head);
    // cout<<middle2(head);
    return 0;
}