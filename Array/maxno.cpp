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
    int maxno=0;
    for(int i=0;i<n;i++) {
        maxno=max(maxno,arr[i]);
        cout<<maxno<<endl;
    }
    return 0;
}