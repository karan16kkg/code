#include<iostream>
using namespace std;

template<class x>  //defining template

x big(x a, x b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    cout<<big(2,3)<<endl;
    cout<<big(2.3,1.6);
    return 0;
}
