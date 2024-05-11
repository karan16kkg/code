#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size";
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int check=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
           check=0;
           break; 
        }
    }
    if(check==1){
        cout<<"It is palindrome";
    }
    else{
        cout<<"It is not palindrome";
    }
    return 0;
} 