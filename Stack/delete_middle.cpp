#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&input,int cnt,int size){
    if(cnt==size/2){
        input.pop();
        return;
    }

    int num=input.top();
    input.pop();

    solve(input,cnt+1,size);
    input.push(num);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int n=st.size();
    solve(st,0,n);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<st.size();
    return 0;
}