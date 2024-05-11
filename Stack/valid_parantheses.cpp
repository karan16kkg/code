#include<iostream>
#include<stack>
using namespace std;
bool isvalid(string str,stack<char>st){

    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(str[i]=='(' || str[i]=='{'  || str[i]=='['){
            st.push(str[i]);
        }
        else{
            if(!st.empty()){
                if((ch==')' && st.top()=='(') || (ch=='}' && st.top()=='{') || (ch==']' && ch=='[')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string str;
    getline(cin,str);
    stack<char>st;
    cout<<isvalid(str,st);
    return 0;
}