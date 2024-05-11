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

class stack{
    public:
    node*top;
    stack(){
        top=NULL;
    }

    void push(int data){
        node*temp = new node(data);
        temp->next = top;
        top = temp;
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
            return;
        }
        node*temp = top;
        top=top->next;
        delete(temp);
    }

    int peek(){
        if(top!=NULL){
            return top->data;
        }
        else{
            cout<<"Stack empty"<<endl;
            return 0;
        }
    }

    bool isEmpty(){
        if(top == NULL){
            return true;
        }

        else{
            return false;
        }
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    cout<<st.peek()<<endl;
    st.pop();
    // st.pop();
    cout<<st.isEmpty();
    return 0;
}