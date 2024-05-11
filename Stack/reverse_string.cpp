#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
    string str="Hello";
    stack<char>st;
    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }
    string ans="";
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    cout<<ans;
    return 0;
}