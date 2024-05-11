#include<iostream>
#include<stack>
using namespace std;
void insert_at_bottom(stack<int>&st,int num){
    if(st.empty()){
        st.push(num);
        return;
    }
    int n=st.top();
    st.pop();
    insert_at_bottom(st,num);
    st.push(n);
}
void reverse(stack<int>&st){
    if(st.empty()){
        return;
    }

    int num=st.top();
    st.pop();

    reverse(st);
    insert_at_bottom(st,num);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverse(st);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}