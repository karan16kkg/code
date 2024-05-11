//square root of a number;
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int square=0;
    int ans=0;
    int s=0;
    int e=n;
    while(s<e){
        long long int mid=s+e/2;
        square=mid*mid;
        if(square==n){
            cout<<mid;
             break;
        }
        else if(square>n){
            e=mid-1;
        }
        else if(square<n){
            ans=mid;
            s=mid+1;
        }
    }
    cout<<ans;
    return 0;
}