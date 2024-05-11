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
    node*temp=new node(data);
    tail->next=temp;
    tail=temp;
}
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insert_at_tail(node*&tail,node*curr){
    tail->next=curr;
    tail=curr;
}

void sort(node*&head){
    node*zero_head=new node(-1);
    node*zero_tail=zero_head;
    node*one_head=new node(-1);
    node*one_tail=one_head;
    node*two_head=new node(-1);
    node*two_tail=two_head;

    node*curr=head;
    while(curr!=NULL){
        int val=curr->data;
        if(val==0){
            insert_at_tail(zero_tail,curr);
        }
        if(val==1){
            insert_at_tail(one_tail,curr);
        }
        if(val==2){
            insert_at_tail(two_tail,curr);
        }
        // insert_at_tail(zero_tail,curr);
        curr=curr->next;
    }
    //merging
    // zero_tail->next=one_head->next;
    // one_tail->next=two_head->next;
    if(one_head!=NULL){
        zero_tail->next=one_head->next;
    }
    else{
        zero_tail->next=two_head->next;
    }
    one_tail->next=two_head->next;
    two_tail->next=NULL;
    head=zero_head->next;
    print(head);
}
int main(){
    node*n1=new node(0);
    node*head=n1;
    node*tail=n1;
    print(head);
    insert(tail,1);
    insert(tail,2);
    insert(tail,1);
    insert(tail,2);
    print(head);
    sort(head);
    return 0;
}