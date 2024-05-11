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
    int mn=INT_MAX;
    int indx[n];
    for(int i=0;i<n;i++) {
        indx[i]=-1;
    }
    for(int i=0;i<n;i++) {
        if(indx[arr[i]]!=-1){
            mn=min(mn,indx[i]);
        }
        else{
            indx[arr[i]]=i;
        }
    }
    cout<<mn;
    return 0;
}