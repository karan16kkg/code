#include<iostream>
using namespace std;
int to_integer(char arr[],int n){
    if(n==0){
        return 0;
    }
    int ans=arr[n-1]-'0';
    int chotans=to_integer(arr,n-1);
    return chotans*10+ans;
}
int main(){
    char arr[]="223";
    cout<<to_integer(arr,3);
    return 0;
}