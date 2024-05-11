#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome"<<endl;
    try{
        throw 10;
        cout<<"In try"<<endl;
    }
    catch(int e){
        cout<<"exception no: "<<e<<endl;
    }
    cout<<"Last line"<<endl;
    return 0;
}