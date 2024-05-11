#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int ans[26]={0};
    int max_no=0;
    char ans1;
    for(int i=0;i<str.size();i++){
        int temp=str[i]-'a';
        ans[temp]++;
    }
    for(int i=0;i<26;i++){
       if(max_no<ans[i]){
        ans1=i+'a';
        max_no=ans[i];
       }
    }
    cout<<ans1;
    return 0;
}