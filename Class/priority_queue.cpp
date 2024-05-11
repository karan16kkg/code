#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int main(){
    // priority_queue<int>que;
    // que.push(2);
    // que.push(1);
    // cout<<que.top()<<endl;

    // priority_queue<int,vector<int>,greater<int>>pq;
    // pq.push(1);
    // pq.push(2);
    // pq.push(3);  //time complexity is log(n)
    // pq.pop();    //time complexity is log(n)
    // cout<<pq.top();  //time complexity is O(1)

    // next larget element at left
    // int arr[]={1,6,4,10,2,5};
    // vector<int>arr1;
    // for(int i=0;i<6;i++){
    //     int ans=-1;
    //     for(int j=i-1;j>=0;j--){
    //         if(arr[j]>arr[i]){
    //             ans=arr[j];
    //             break;
    //         }
    //     }
    //     arr1.push_back(ans);
    // }
    // for(int i=0;i<arr1.size();i++){
    //     cout<<arr1[i]<<" ";
    // }

    int arr[]={1,6,4,10,2,5};
    vector<int>ans(6,-1);
    stack<int>s;
    for(int i=0;i<6;i++){
        while(!s.empty() && s.top()<arr[i]){
            s.pop();
        }
        if(!s.empty()){
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    for(int i=0;i<6;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}