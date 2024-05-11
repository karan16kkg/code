#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5>arr;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // cout<<arr.at(1)<<endl;
    // cout<<arr[4]<<endl;
    // cout<<arr.front()<<endl;
    // cout<<arr.back()<<endl;
    // arr.fill(10);
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // array<int,5>arr2={11,22,33,44,55};
    // arr.swap(arr2);
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    cout<<arr.size()<<endl;
    return 0;
}