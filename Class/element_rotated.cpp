#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<e){
        int mid=(s+e)/2;
        if(arr[0]>arr[mid]){
            ans=mid;
            e=mid;
        }
        else if(arr[0]<arr[mid]){
            s=mid+1;
        }
    }
    cout<<ans;
    return 0;
}