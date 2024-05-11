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
    int a=0;
    int b=n-1;
    int target;
    cout<<"Enter the target element : ";
    cin>>target;
    int f=0;
    while(a<b){
        if(arr[a]+arr[b]==target){
            f++;
            cout<<"True";
            break;
        }
        else if(arr[a]+arr[b]<target){
            a++;
        }
        else if(arr[a]+arr[b]>target){
            b--;
        }
    }
    if(f==0){
        cout<<"False";
    }
    return 0;
}