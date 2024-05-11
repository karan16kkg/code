#include<iostream>
#include<queue>
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

node*build(node*root){
    
    int data;
    cin>>data;
    root=new node(data);
    if(data == -1){
        return NULL;
    }

    root->left=build(root->left);
    root->right=build(root->right);

    return root;
}

//Level Order Traversal
void levelorder_traversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node*temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            // q.pop();
            if (temp->left){
                q.push(temp->left);
            }

            if (temp->right){
                q.push(temp->right);
            }
        }
    }
}

//Inorder Traversal (LNR)
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//Preorder Traversal (NLR)
void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//Postorder Traversal (LRN)
void postorder(node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void build_level_order(node*&root){
    queue<node*>q;
    cout<<"Enter the data for root "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    node*temp=q.front();
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        
        cout<<"Enter the data for left node "<<temp->data<<endl;
        int left_data;
        cin>>left_data;
        if(left_data!=-1){
            temp->left=new node(left_data);
            q.push(temp->left);
        }

        cout<<"Enter the data for right node "<<temp->data<<endl;
        int right_data;
        cin>>right_data;
        if(right_data!=-1){
            temp->right=new node(right_data);
            q.push(temp->right);
        }
    }
}
int main(){
    node*root=NULL;
    // root=build(root);
    // levelorder_traversal(root);
    build_level_order(root);
    inorder(root);
    // preorder(root);
    // postorder(root);
    return 0;
}

//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1