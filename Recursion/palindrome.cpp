//Check the given string is palindrome or not
#include<iostream>
using namespace std;
bool palindrome(string &str,int i,int j){
    //base case
    if(i>j){
        return true;
    }
    //recursive call statement
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return palindrome(str,i+1,j-1);
    }
}
int main(){
    string str;
    cin>>str;
    int i=0,j=str.size()-1;
    if(palindrome(str,i,j)){
        cout<<"Yes palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}