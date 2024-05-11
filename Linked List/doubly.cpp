#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*prev;
    node*next;
    node(int data){  //constructor for a new node
        this->data=data;
        prev=NULL;
        next=NULL;
    }
};

void insert_at_head(node*&head,int data){  //inserting the node at first position
    if(head==NULL){
        node*temp=new node(data);
        head=temp;
    }
    else {
        node *temp = new node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insert_at_tail(node*&tail,int data){
    if(tail==NULL){
        node*temp=new node(data);
        tail=temp;
    }
    else{
        node *temp = new node(data);
        tail->next = temp;
        temp->prev = tail;
        temp = tail;
    }
}

void insert_at_position(node*&head,node*&tail,int data,int position){
    if(position==1){
        insert_at_head(head,data);
        return;
    }
    node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    node*new_node=new node(data);
    new_node->next=temp->next;
    temp->next->prev=new_node;
    temp->next=new_node;
    new_node->prev=temp;

    if(temp->next==NULL){
        insert_at_tail(tail,data);
        return;
    }
}

void delete_at_position(node*&head,int position){
    if(position ==1){  //deleting the node at first position
        node*temp=head;
        head=head->next;
        head->next->prev=NULL;
        temp->next=NULL;
        delete temp;
    }

    else{  //deleting the node at given position
        node*curr=head;
        node*pre=NULL;
        int cnt=1;
        node*temp=head;
        while(cnt<position){
            pre=curr;
            curr=curr->next;
            cnt++;
        }
        pre->next=curr->next;
        //curr->next->prev=pre;
        curr->prev=NULL;
        curr->next=NULL;
        delete curr;
    }

    
}
int getlength(node*head){
    int len=0;
    node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
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
    node*n1=new node(10);
    node*head=n1;
    node*tail=n1;
    print(head);
    insert_at_head(head,5);
    print(head);
    insert_at_tail(tail,15);
    print(head);
    insert_at_position(head,tail,4,2);
    print(head);
    delete_at_position(head,4);
    print(head);
    cout<<getlength(head);
    return 0;
}