#include<iostream>
#include<map>
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
        map<node*,bool>visited;
        if(visited[temp]==true){
            temp->next=temp->next->next;
        }
        visited[temp]=true;
        temp=temp->next;
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
    node*n1=new node(4);
    node*head=n1;
    node*tail=n1;
    print(head);
    insert(tail,2);
    insert(tail,5);
    insert(tail,4);
    insert(tail,2);
    insert(tail,2);
    print(head);
    delete_duplicate(head);
    print(head);
    return 0;
}