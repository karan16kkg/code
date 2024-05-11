#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    // string str;
    // getline(cin,str);
    // for(int i=0;i<str.size();i++) {
    //     if(str[i]>='a' && str[i]<='z'){
    //         str[i]=str[i]-32;
    //     }
    // }
    // cout<<str;

    string str="64038";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str;
    return 0;
}