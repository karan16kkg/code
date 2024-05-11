#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int>&st,int element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int num=st.top();
    st.pop();
    insert(st,element);
    st.push(num);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insert(st,8);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}