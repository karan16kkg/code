//find the element in the array
#include<iostream>
using namespace std;
bool linear_search(int arr[],int n,int key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){  //for checking the each element because in recursion we always pass array by increasing value
        return true;
    }
    else{
        return linear_search(arr+1,n-1,key);
    }
}
int main(){
    int n,key;
    cin>>n>>key;
    int * arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<linear_search(arr,n,key);
    delete[]arr;
    return 0;
}