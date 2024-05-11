//find the first and last occurence of an element
#include<iostream>
using namespace std;
int first_occurence(int arr[], int n,int element){
    int ans=0;
    int st=0;
    int end=n-1;
    int mid;
    while(st<=end){
        mid=(st+end)/2;
        if(arr[mid]==element){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>element){
            end=mid-1;
        }
        else if(arr[mid]<element){
            st=mid+1;
        }
    }
    return ans;
}
int last_occurence(int arr[],int n,int element){
    int ans=0;
    int st=0;
    int end=n-1;
    int mid;
    while(st<=end){
        mid=(st+end)/2;
        if(arr[mid]==element){
            ans=mid;
            st=mid+1;
        }
        else if(arr[mid]>element){
            end=mid-1;
        }
        else if(arr[mid]<element){
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    int n,element;
    cin>>n;
    cin>>element;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //cout<<first_occurence(arr,n,element)<<endl;
    cout<<last_occurence(arr,n,element)<<endl;

    //total no of occurence of an element
    //((last occurence index)-(first occurence index)+1)
    // cout<<((last_occurence(arr,n,element))-(first_occurence(arr,n,element))+1);
    return 0;
}