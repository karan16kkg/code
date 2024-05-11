#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int max_sum=0;
    for(int i=0;i<4;i++) {
        int sum=0;
        for(int j=0;j<4;j++) {
            sum+=arr[j];
            max_sum=max(max_sum,sum);
        }
    }
    cout<<max_sum;
    return 0;
}