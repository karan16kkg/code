#include<iostream>
using namespace std;
void input(int n,int arr[]){
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
}
int linear(int n,int arr[],int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
void display(int n,int arr[]){
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n=5,arr[n];
    input(n,arr);
    cout<<linear(n,arr,4);
    cout<<endl;
    display(n,arr);
    return 0;
}