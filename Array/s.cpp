#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,6,7};
    // int sum=0;
    for(int i=0;i<4;i++){
        for(int j=i;j<4;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
                cout<<arr[k]<<" ";
                // cout<<sum;
            }
            cout<<endl;
        }
    }
    return 0;
}