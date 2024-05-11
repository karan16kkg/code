#include<iostream>
using namespace std;
void sort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+e/2;
    sort(arr,0,mid);
    sort(arr,mid+1,e);
}
int main(){
    int arr[]={2,1,4,3,6,5};
    return 0;
}