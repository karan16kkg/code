#include<iostream>
using namespace std;
int main(){
    // int n,target;
    // cin>>n>>target;
    // int arr[10];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int s=0,e=n-1;

    // while(s<=e){
    //     int mid=(s+e)/2;
    //     if(arr[mid]==target){
    //         cout<<mid<<endl;
    //         break;
    //     }
    //     else if(arr[mid]<target){
    //         s=mid+1;
    //     }
    //     else if(arr[mid]>target){
    //         e=mid-1;
    //     }
    // }
    // if(s>e){
    //     cout<<"not found"<<endl;
    // }

    // int n,target;
    // cin>>n>>target;
    // int arr[10];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int s=0,e=n-1;
    // int ans=0;
    // while(s<=e){
    //     int mid=(s+e)/2;
    //     if(arr[mid]==target){
    //        ans=mid;
    //        e=mid-1;
    //     }
    //     else if(arr[mid]<target){
    //         s=mid+1;
    //     }
    //     else if(arr[mid]>target){
    //         e=mid-1;
    //     }
    // }
    // cout<<ans;
    // // if(s>e){
    // //     cout<<"not found"<<endl;
    // // }
    // // else{
    // //     cout<<ans;
    // // }

    // int n,target;
    // cin>>n>>target;
    // int arr[10];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int s=0,e=n-1;
    // int ans=0;
    // while(s<=e){
    //     int mid=(s+e)/2;
    //     if(arr[mid]==target){
    //        ans=mid;
    //        s=mid+1;
    //     }
    //     else if(arr[mid]<target){
    //         s=mid+1;
    //     }
    //     else if(arr[mid]>target){
    //         e=mid-1;
    //     }
    // }
    // cout<<ans;

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0,e=n-1;
    int ans=0;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]%2==0){
            s=mid+1;
            ans=mid;
        }
        else if(arr[mid]%2!=0){
            e=mid-1;
        }
    }
    cout<<ans;
    return 0;
}