#include<iostream>
#include<map>
#include<queue>
using namespace std;
int main(){
    string str;
    cin>>str;
    map<char,int>count;
    string ans="";
    queue<int>qe;
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
        qe.push(str[i]);
        while(!qe.empty()){
            if(count[str[i]]>1){
                qe.pop();
            }
            else{
                ans.push_back(qe.front());
                break;
            }
        }
        if(qe.empty()){
            ans.push_back('#');
        }
    }
    cout<<ans;

    return 0;
}