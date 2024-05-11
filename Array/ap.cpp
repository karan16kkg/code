#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the no of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int ans=2;
    int curr=2;
    int j=0;
    int pd;
    while(j<n){
        if(pd==arr[j+1]-arr[j]){
            curr++;
        }
        else{
            pd=arr[j+1]-arr[j];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans;
    return 0;
}
