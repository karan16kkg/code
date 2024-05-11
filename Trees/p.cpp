#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    string data;
    node*left;
    node*right;
    node(string data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node*build(vector<string>arr,int i){
   
    if(i>=arr.size() || arr[i]=="NULL"){
        return NULL;
    }
    node* root=new node(arr[i]);
    root->left=build(arr,2*i+1);
    root->right=build(arr,2*i+2);

    return root;
    
}


void inorder(node*root)
{
    if(root== NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    node*root=NULL;
    vector<string>arr={"1","2","3","NULL"};
    root=build(arr,0);
    inorder(root);
    return 0;
}