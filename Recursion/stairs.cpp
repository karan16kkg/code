//find the to cases to reach the nth stair (either from (n-1)th stair or (n-2)th stair)
#include<iostream>
using namespace std;
int stair(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return n=stair(n-1)+stair(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<stair(n);
    return 0;
}