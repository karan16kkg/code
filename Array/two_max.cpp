#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the no of elements : ";
    cin>>n;
    int arr[n+1];
    arr[n]=-1;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int mx=-1;
    int count=0;
    for(int i=0;i<n;i++) {
        if(arr[i]>mx && arr[i]>arr[i+1]){
            count++;
        }
        //mx=arr[i];
        mx=max(mx,arr[i]);
    }
    cout<<count;
    return 0;
}