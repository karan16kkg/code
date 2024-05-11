#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>nums,vector<vector<int>>ans,vector<int>output,int index){
    if(index==nums.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    solve(nums,ans,output,index+1);
    //include
    output.push_back(nums[index]);
    solve(nums,ans,output,index+1);
}
int main(){
    vector<int>nums={1,2,3};
    vector<vector<int>>ans;
    vector<int>output;
    int index=0;
    solve(nums,ans,output,index);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}

//#include<iostream>
#include<bits/stdc++.h>  
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"[[]";
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           cout<<"[";
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
        cout<<"]";
        // cout<<"\n";
        }
    }
    cout<<"]";
    return 0;
}