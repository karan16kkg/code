#include<iostream>
#include<stack>
using namespace std;
bool check(stack<char>st,string str){
    for(int i=0;i<str.length();i++){
        if(str[i]=='('  || str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/'){
            st.push(str[i]);
        }
        else{
            if(str[i]==')'){
                bool is=true;
                while(st.top()!='('){
                    char top=st.top();
                    if(top=='+' || top=='-' || top=='*' || top=='/'){
                        is=false;
                    }
                    st.pop();
                }
                if(is==true){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
int main(){
    string str="(a+b)";
    stack<char>st;
    cout<<check(st,str)<<endl;
    return 0;
}