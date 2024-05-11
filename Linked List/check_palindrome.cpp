// //Palindrome using array

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// void insert_at_tail(node*&tail,int data){
//     node*temp=new node(data);
//     tail->next=temp;
//     tail=temp;
// }
// void palindrome(node*&head,int arr[]){
//     node*temp=head;
//     int i=0;
//     while(temp!=NULL){
//         arr[i]=temp->data;
//         i++;
//         temp=temp->next;
//     }
// }
// void print(node*&head){
//     node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int  main(){
//     node*n1=new node(1);
//     node*head=n1;
//     node*tail=n1;
//     insert_at_tail(tail,2);
//     insert_at_tail(tail,1);
//     print(head);
//     int arr[3];
//     palindrome(head,arr);
//     int s=0,e=2;
//     while(s<=e){
//         if(arr[s]==arr[e]){
//             s++;
//             e--;
//         }
//         else{
//             cout<<"not palindrome";
//             break;
//         }
//     }
//     if(e==0){
//         cout<<"palindrome";
//     }
//     return 0;
// }


//Palindrome using middle

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
node*middle(node*&head){
    node*fast=head->next;
    node*slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
node*reverse(node*&temp){
    node*curr=temp;
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
bool palindrome(node*&head,node*&mid){
    node*temp=head;
    node*midd=mid;
    while(midd!=NULL){
        if(temp->data!=midd->data){
            return false;
            break;
        }
        temp=temp->next;
        midd=midd->next;
    }
    return true;
}
void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int  main(){
    node*n1=new node(1);
    node*head=n1;
    node*tail=n1;
    insert_at_tail(tail,2);
    insert_at_tail(tail,3);
    insert_at_tail(tail,3);
    insert_at_tail(tail,2);
    insert_at_tail(tail,1);
    print(head);
    node*mid=middle(head);
    node*temp=mid->next;
    cout<<temp->data<<endl;
    node*prev=reverse(temp);
    mid->next=prev;
    print(head);
    node*head1=head;
    node*head2=mid->next;
    cout<<palindrome(head1,head2);
    return 0;
}