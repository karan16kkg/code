#include<iostream>
#include<queue>
#include<Stack>
using namespace std;
void reverse(queue<int>&qe){
    if(qe.empty()){
        return;
    }
    int n=qe.front();
    qe.pop();
    reverse(qe);
    qe.push(n);
}
int main(){
    stack<int>st;
    queue<int>qe;
    qe.push(4);
    qe.push(3);
    qe.push(1);
    qe.push(10);
    qe.push(2);
    qe.push(6);
    // reverse(qe);  //by using the reverse function
    while(!qe.empty()){   //by using stack
        st.push(qe.front());
        qe.pop();
    }
    while(!st.empty()){
        qe.push(st.top());
        st.pop();
    }
    while(!qe.empty()){
        cout<<qe.front()<<" ";
        qe.pop();
    }
    return 0;
}