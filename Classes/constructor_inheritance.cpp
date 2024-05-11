#include<iostream>
using namespace std;
class A{
    int a;
    public:
    
    A(int x){
        a=x;
    }
};

class B : public A{
    int a,b;
    public:
    B(int x,int y, int z) : A(z){
        a=x;
        b=y;
    }
    void print(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    B obj(1,2,3);
    obj.print();
    return 0;
}