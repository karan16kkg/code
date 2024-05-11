//print the character with max count in the string

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    string str;
    cin>>str;
    char ans;
    int mx=0;
    int count[26]={0};
    for(int i=0;i<str.length();i++){
        int temp=str[i]-'a';
        count[temp]++;
    }
    for(int i=0;i<26;i++){
        if(mx<count[i]){
            ans=i+'a';
            mx=count[i];
        }
    }
    cout<<ans;
    return 0;
}