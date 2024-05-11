#include<iostream>
using namespace std;
//Sum of n natural numbers
int sum(int n){
	if(n==0){
		return 0;
	}
	return n+sum(n-1);
}

//Power of a number
int power(int n, int p){
    if(p==0){
        return 1;
    }
    return n*power(n,p-1);
}

//Factorial of a number
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

//Fibonachi series
int fibonachi(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonachi(n-1) + fibonachi(n-2);
}
int main() {
    int n,p;
    cin>>n;
    //cin>>p;
    // cout<<sum(n)<<endl;
    // cout<<power(n,p);
    //cout<<factorial(n);
    cout<<fibonachi(n);
    return 0;
}