#include<iostream>
#include<queue>
using namespace std;
void reverse(queue<int>&qe,int k,int cnt){
    if(cnt==k || qe.empty()){
        return;
    }
    int n=qe.front();
    qe.pop();
    reverse(qe,k,cnt+1);
    qe.push(n);
}
int main(){
    queue<int>qe;
    qe.push(1);
    qe.push(2);
    qe.push(3);
    qe.push(4);
    qe.push(5);
    reverse(qe,3,0);
    for(int i=0;i<qe.size()-3;i++){
        qe.push(qe.front());
        qe.pop();
    }
    while(!qe.empty()){
        cout<<qe.front()<<" ";
        qe.pop();
    }
    return 0;
}