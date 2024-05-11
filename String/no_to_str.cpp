//print the string of a no digit
#include<iostream>
using namespace std;
void digits(int n,string arr[]){
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    // recursive case
    digits(n,arr);

    cout<<arr[digit-1]<<" ";
}
int main(){
    int n;
    cin>>n;
    string arr[]={"one","two","three","four","five","six","seven","eight","nine"};
    digits(n,arr);
    return 0;
}