#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node*left,*right;
    node(int data){
        this->data=data;
        this->left=this->right=NULL;
    }
};

node* insert(){
    int data;
    cout<<"Enter input : ";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    node*temp=new node(data);
    temp->left=insert();
    temp->right=insert();
    return temp;
}

// preorder triversal
// root LR
void pre_order(node*&head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    pre_order(head->left);
    pre_order(head->right);
}


// inorder triversal
// L root R
void in_order(node*&head){
    if(head==NULL){
        return;
    }
    in_order(head->left);
    cout<<head->data<<" ";
    in_order(head->right);
}

// postorder triversal
// LR root
void post_order(node*&head){
    if(head==NULL){
        return;
    }
    post_order(head->left);
    post_order(head->right);
    cout<<head->data<<" ";
}


//level order
void level(node*head){
    queue<int>q;
    q.push(head);
    while(!q.empty()){
        node*f=q.front();
        cout<<f->data;
        q.pop();
    }
}
int main(){
    node*root=insert();
    // pre_order(root);
    in_order(root);
    return 0;
}