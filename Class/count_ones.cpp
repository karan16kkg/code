#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int s=0;
    // int e=n-1;
    // int ans=-1;
    // while(s<=e){
    //     int mid=(s+e)/2;
    //     if(arr[mid]==1){
    //         ans=mid;
    //         e=mid-1;
    //     }
    //     else if(arr[mid]==0){
    //         s=mid+1;
    //     }
    // }
    // cout<<n-ans<<endl;

    int n;
    cin>>n;
    int s=0;
    int e=n;
    int ans=-1;
    while(s<=e){
    int mid=(s+e)/2;
    long long int square=mid*mid;
        if(square==n){
            cout<<mid;
            break;
        }
        else if(square<n){
            s=mid+1;
            ans=mid;
        }
        else if(square>n){
            e=mid-1;
        }
    }
    cout<<ans;
    return 0;
}