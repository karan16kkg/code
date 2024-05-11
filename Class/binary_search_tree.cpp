#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

node*insert(node*&root,int val){
    if(root==NULL){
        node*temp=new node(val);
        root=temp;
    }
    else if(val<root->data){
        root->left=insert(root->left,val);
    }
    else if(val>root->data){
        root->right=insert(root->right,val);
    }
}


node*build(){
    node*root;
    int data;
    cin>>data;
    while(data!=-1){
        root=insert(root,data);
    }
}
int main(){
    return 0;
}