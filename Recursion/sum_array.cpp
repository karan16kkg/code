//sum of an array
#include<iostream>
using namespace std;
int sum_array(int arr[],int n){
    int sum=0;
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    sum=arr[0] + sum_array(arr+1,n-1);
    return sum;
}
int main(){
    int n;
    cin>>n;
    int * arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sum_array(arr,n);
    delete[]arr;
    return 0;
}