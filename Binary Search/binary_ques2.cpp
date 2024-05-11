//pivote element(means the smallest element after a increasing order)
#include<iostream>
int pivote(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=(s+e)/2;
        if(arr[mid]>arr[0]){ //if mid element is greater than first 
            s=mid+1;
        }
        else{ //if mid element is less than first element
            e=mid;
        }
    }
    return e;
}
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<pivote(arr,n);
    return 0;
}