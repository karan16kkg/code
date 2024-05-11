#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
void reverse(char * a,int length){
    //base case
    if(length==0){
        return;
    }
    cout<<a[length-1];
    reverse(a,length-1);
}
void remove(int n){
    int rem=0,i=0;
    int integer=0;
    if(n==0){
        return;
    }
    rem=n%10;
    if(rem==0){
        rem=5;
    }
    integer=rem*pow(10,i)+integer;
    i++;
    n=n/10;
    remove(n);
    cout<<integer;
}
int remove_t(int n){
    int i = n%10;
    if (i==0) i = 5;
    if (n/10 == 0) return i;
    return i + remove_t(n/10) * 10;
}
int main(){
    // char a[100];
    // cin>>a;
    // int n = strlen(a);
    // reverse(a,n);
    int n;
    cin>>n;
    remove(n);
    cout << endl;
    cout << remove_t(n) << endl;
    return 0;
}