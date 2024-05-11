//search an element in an array using binary search with recursion
#include<iostream>
using namespace std;
bool binary_search(int arr[],int st,int end,int key){
    int mid=st+end;
    if(st>end){  //element not found
        return false;
    }
    if(arr[mid]==key){  //element found
        return true;
    }
    if(arr[mid]<key){  //mid element of array is less than key
        return binary_search(arr,mid+1,end,key);
    }
    else{  //mid element of array is greater than key
        return binary_search(arr,st,mid-1,key);
    }
}
int main(){
    int n,key,st,end;
    cin>>n>>key;
    st=0;
    end=n-1;
    int * arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<binary_search(arr,st,end,key);
    delete[]arr;
    return 0;
}