//search an element in the rotated array by using pivote
#include<iostream>
int binary_search(int arr[],int element,int st,int end){
    int mid;
    int ans=0;
    while(st<=end){
        mid=(st+end)/2;
        if(arr[mid]==element){
            ans=mid;
            break;
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
    int n,element;
    cin>>n;
    cin>>element;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pivote_indx=pivote(arr,n);
    if(element>=arr[pivote_indx] && element<=arr[n-1]){ //searching the element from pivote index to lase because element lies b/w pivote to last
        cout<<binary_search(arr,element,pivote_indx,n-1);
    }
    else{
        cout<<binary_search(arr,element,0,pivote_indx-1);
    }
    return 0;
}