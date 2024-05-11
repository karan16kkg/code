#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int*arr;
    int top;
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow";
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow";
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack Empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    stack st(5);

    st.push(22);
    st.push(23);
    st.push(24);
    st.push(25);
    st.push(26);
    st.pop();
    st.push(27);
    // st.pop();
    // cout<<st.peek()<<endl;
    // cout<<st.isEmpty();
    return 0;
}