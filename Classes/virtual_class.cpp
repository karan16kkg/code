#include<iostream>
using namespace std;
class A{
    public:
    virtual void f1(){  // Virtual keyword is used to to acces which obj would be called at the run time not at compile time
        cout<<"Class A"<<endl;
    }
};

class B : public A{
    public:
    void f1(){
        cout<<"Class B"<<endl;
    }
};
int main(){
    A*p,o1;
    B o2;
    p=&o1;
    p->f1();
    return 0;
}
