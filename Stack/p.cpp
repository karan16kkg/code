#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main(){
    int arr[]={-8,2,3,-6,10};
    vector<int>ans;
    deque<int>dq;
    int k=2;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            dq.push_back(i);
        }
    }

    if(!dq.empty()){
        ans.push_back(arr[dq.front()]);
    }
    for(int i=k;i<5;i++){
        if(!dq.empty() && i-dq.front()>=k){
            dq.pop_front();
        }
        if(arr[i]<0){
            dq.push_back(i);
        }
        if(dq.size()>0){
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}