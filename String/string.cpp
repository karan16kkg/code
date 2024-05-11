#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    // cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int length=0,max_length=0;
    for(int i=0;i<n;i++){
        if(arr[i]==' '){
            max_length=max(max_length,length);
            // if(length>max_length){
            //     max_length=length;
            // }
            length=0;
        }
        else{
            length++;
        }
    }
    cout<<max_length;
    return 0;
}