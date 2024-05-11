#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int data){  //when a new node will made then we will use this constructor
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_head(node*&head,int data){
    node*temp=new node(data);  //new node creation
    temp->next=head;
    head=temp;
}

void insert_at_tail(node*&tail,int data){
    node*temp=new node(data);  //new node creation
    tail->next=temp;
    tail=temp;
}

void insert_at_position(node*&head,int position,int data){
    if(position==1){  //inserting element at start
        insert_at_head(head,data);
        return;
    }
    int cnt=1;
    node*temp=head;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    node*new_node=new node(data);
    new_node->next=temp->next;
    temp->next=new_node;

    if(temp->next==NULL){  //inserting element at last
        insert_at_tail(head,data);
        return;
    }
}

void delete_at_position(node*&head,int position){
    if(position==1){  //deleting the node at first position
        node*temp=head;
        head=head->next;
        delete temp;
    }
    else{  //deleting the node at given position
        int cnt=1;
        node*current=head;
        node*prev=NULL;
        while(cnt<position){
            prev=current;
            current=current->next;
            cnt++;
        }
        prev->next=current->next;
        delete current;
    }
}

void print(node*&head){
    node*temp=head;  //a new node is pointing to head
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node *n1=new node(10);  //assigning the memory dynamicly for each node
    node*head=n1;
    node*tail=n1;
    cout<<n1->data<<endl;
    cout<<n1->next<<endl;

    insert_at_head(head,5);  //a new node inserted before the head
    print(head);
    cout<<endl;
    insert_at_tail(tail,15);  //a new node inserted after the head
    print(head);
    insert_at_tail(tail,20);
    print(head);
    // cout<<endl;;
    // insert_at_position(head,3,4);
    // print(head);
    // delete_at_position(head,3);
    // print(head);
    return 0;
}