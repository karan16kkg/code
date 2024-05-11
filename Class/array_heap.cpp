#include<iostream>
using namespace std;
int main(){
    // int*p=new int[5];
    // int target;
    // cin>>target;
    // for(int i=0;i<5;i++){
    //     p[i]=i+1;
    // }
    // bool is=false;
    // int ans=0;
    // for(int i=0;i<5;i++){
    //     if(p[i]==target){
    //         is=true;
    //         ans=i;
    //         break;
    //     }
    // }
    // if(!is){
    //     cout<<"Element not found"<<endl;
    // }
    // else{
    //     cout<<"Element found at "<<ans<<endl;
    // }
    // delete[]p;
    // p=NULL;

    //insert at first position
    // int*p=new int[10];
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>p[i];
    // }
    // for(int i=n;i>0;i--){
    //     p[i]=p[i-1];
    // }
    // p[0]=10;
    // for(int i=0;i<=n;i++){
    //     cout<<p[i]<<" ";
    // }
    // delete[]p;
    // p=NULL;

    //insert at given position
    // int*p=new int[10];
    // int n,k;
    // cin>>n>>k;
    // for(int i=0;i<n;i++){
    //     cin>>p[i];
    // }
    // for(int i=n;i>k-1;i--){
    //     p[i]=p[i-1];
    // }
    // p[k-1]=10;
    // for(int i=0;i<=n;i++){
    //     cout<<p[i]<<" ";
    // }
    // delete[]p;
    // p=NULL;

    // int*p=new int[10];
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>p[i];
    // }
    // for(int i=0;i<n-1;i++){
    //     p[i]=p[i+1];
    // }
    // for(int i=0;i<n-1;i++){
    //     cout<<p[i]<<" ";
    // }
    // delete[]p;
    // p=NULL;

    int n;
    cin>>n;
    int arr[n];
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    return 0;
}