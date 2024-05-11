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
void insert_tail(node*&anshead,node*&anstail,int data){
    if(anstail==NULL){
        node*temp=new node(data);
        anshead=temp;
        anstail=temp;
    }
    else{
        node*temp=new node(data);
        anstail->next=temp;
        anstail=temp;
    }
}
node*reverse(node*head){
    node*curr=head;
    node*prev=NULL;
    node*front=NULL;
    while(curr!=NULL){
        front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    return prev;
}
node*sum(node*&first,node*&second){
    int carry=0;
    node*anshead=NULL;
    node*anstail=NULL;
    while(first!=NULL && second!=NULL){
        int sum=carry+first->data+second->data;
        int rem=sum%10;
        insert_tail(anshead,anstail,rem);
        carry=sum/10;
        first=first->next;
        second=second->next;
    }
    while(first!=NULL){
        int sum=carry+first->data;
        int rem=sum%10;
        insert_tail(anshead,anstail,rem);
        carry=sum/10;
        first=first->next;
    }
    while(second!=NULL){
        int sum=carry+second->data;
        int rem=sum%10;
        insert_tail(anshead,anstail,rem);
        carry=sum/10;
        second=second->next;
    }
    while(carry!=0){
        int sum=carry;
        int rem=sum%10;
        insert_tail(anshead,anstail,rem);
        carry=sum/10;
    }
    return anshead;
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
    node*head1=n1;
    node*tail1=n1;
    insert_at_tail(tail1,2);
    insert_at_tail(tail1,3);
    insert_at_tail(tail1,4);
    print(head1);
    head1=reverse(head1);
    print(head1);
    node*n2=new node(1);
    node*head2=n2;
    node*tail2=n2;
    insert_at_tail(tail2,2);
    insert_at_tail(tail2,3);
    // insert_at_tail(tail2,4);
    print(head2);
    head2=reverse(head2);
    print(head2);
    node*ans=sum(head1,head2);
    ans=reverse(ans);
    print(ans);
    return 0;
}
