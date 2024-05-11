//fiboonachi series
#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){ 
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    cout<<fib(5)<<endl;
    for(int i=0;i<=5;i++){
        cout<<fib(i)<<" ";
    }
    return 0;
}

//element at that position in fiboonachi
#include<iostream>
using namespace std;
int fibonachi(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonachi(n-1) + fibonachi(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibonachi(n);
    return 0;
}