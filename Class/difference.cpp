#include<iostream>
using namespace std;
int main(){
    // int n,target;
    // cin>>n>>target;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     int s=i+1;
    //     int e=n-1;
    //     int value=target+arr[i];
    //     while(s<=e){
    //         int mid=(s+e)/2;
    //         if(arr[mid]==value){
    //             cout<<mid<<" ";
    //             break;
    //         }
    //         else if(arr[mid]<value){
    //             s=mid+1;
    //         }
    //         else if(arr[mid]>value){
    //             e=mid-1;
    //         }
    //     }
    // }

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            cout<<arr[mid];
            break;
        }
        else if(arr[mid]==arr[mid+1]){
            int rc=e-mid+1;
            
        }

    }
    return 0;
}