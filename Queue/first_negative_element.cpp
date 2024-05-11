//First negetive element in a k sized window
#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main(){
    int arr[]={-1,-8,3,-6,10};
    int k=2;
    vector<int>ans;
    deque<int>dq;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            dq.push_back(i);
        }
    }

    if(dq.size()>0){
        ans.push_back(arr[dq.front()]);
    }
    else{
        ans.push_back(0);
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