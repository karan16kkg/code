#include<iostream>
#include<map>
using namespace  std;
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
    else{
        node*temp=new node(data);
        tail->next=temp;
        tail=temp;
    }
}

bool detect_loop(node*head){
    if(head==NULL){
        return false;
    }
    node*temp=head;
    while(temp!=NULL){
        map<node*,bool>visited;
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

node*floyd_detection(node*head){
    if(head==NULL){
        return NULL;
    }
    node*fast=head;
    node*slow=head;
    while(fast!=NULL && slow!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(fast==slow){
            return slow;
        }
    }
    return NULL;
}
 
node*get_start_loop(node*head){
    if(head==NULL){
        return NULL;
    }
    node*intersection=floyd_detection(head);
    node*slow=head;
    while(slow!=intersection){
        intersection=intersection->next;
        slow=slow->next;
    }
    return slow;
}

void delete_cycle(node*head){
    if(head==NULL){
        return;
    }
    node*loop=get_start_loop(head);
    node*temp=loop;
    while(temp->next!=loop){
        temp=temp->next;
    }
    temp->next=NULL;
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
    node*n1=new node(5);
    node*head=n1;
    node*tail=n1;
    // print(head);
    insert(tail,10);
    insert(tail,15);
    insert(tail,20);
    insert(tail,25);
    insert(tail,30);
    tail->next=head->next->next;
    // if(detect_loop(head)){
    //     cout<<"Loop present"<<endl;
    // }
    // else{
    //     cout<<"Loop not present"<<endl;
    // }
    if(floyd_detection(head)!=NULL){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    node*loop=get_start_loop(head);
    cout<<loop->data<<endl;
    delete_cycle(head);
    if(floyd_detection(head)!=NULL){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
     print(head);
    return 0;
}