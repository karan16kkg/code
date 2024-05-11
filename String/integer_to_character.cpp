#include<iostream>
using namespace std;
void display(int n,char arr[]){
    if(n==0){
        return;
    }
    int rem=n%10;
    n=n/10;
    display(n,arr);
    cout<<arr[rem];
}
int main(){
    char arr[27]={' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int n;
    cin>>n;
    display(n,arr);
    return 0;
}