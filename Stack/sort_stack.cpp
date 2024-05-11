#include<iostream>
#include<stack>
using namespace std;
void sort_insert(stack<int>&st,int num){
    if(st.empty() || (!st.empty() && st.top()<num)){
        st.push(num);
        return;
    }
    int n=st.top();
    st.pop();
    sort_insert(st,num);
    st.push(n);
}
void sort_stack(stack<int>&st){
    if(st.empty()){
        return;
    }
    int num=st.top();
    st.pop();
    sort_stack(st);
    sort_insert(st,num);
}
int main(){
    stack<int>st;
    st.push(3);
    st.push(1);
    st.push(7);
    st.push(5);
    sort_stack(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}