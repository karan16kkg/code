#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-7,1,5,2,-4,3,0};
    int total=0;
    for(int i=0;i<7;i++){
        total+=arr[i];
    }
    int left=0;
    for(int i=0;i<7;i++){
        total-=arr[i];
        if(left==total){
            cout<<i;
        }
        left+=arr[i];
    }
    // cout<<i;
    return 0;
}