#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,4,5};
    int ans=-1;
    for(int i=0;i<6;i++){
        if(arr[i]==arr[i+1]){
            ans=arr[i];
            break;
        }
    }
    cout<<ans;
    return 0;
}