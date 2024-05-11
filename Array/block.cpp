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
    int k=3;
    int sum=0;
    int maxsum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    maxsum=sum;
    int i=0;
    int j=k;
    while(j<n){
        sum-=arr[i];
        sum+=arr[j];
        i++;
        j++;
        maxsum=max(maxsum,sum);
    }
    cout<<maxsum;
    return 0;
}