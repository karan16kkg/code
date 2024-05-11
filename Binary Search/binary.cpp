#include<iostream>
using namespace std;
void input(int n,int arr[]){
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
}
int main() {
    int n,arr[n];
    cout<<"Enter the no of elements : ";
    cin>>n;
    input(n,arr);
    int f=0;
    int low=0;
    int high=n-1;
    int element;
    cout<<"Enter the element"<<endl;
    cin>>element;
    while(low<=high){
        int mid=(low+high)/2;
        if(element==arr[mid]){
            f++;
            break;
        }
        else if(element<mid){
            high=mid-1;
        }
        else if(element>mid){
            low=mid+1;
        }
    }
    if(f==1){
        cout<<"YES";
    }
    else if(f==0){
        cout<<"NO";
    }
    return 0;
}