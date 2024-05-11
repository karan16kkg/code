#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;

    void sum(complex x1, complex x2){
        real=x1.real+x2.real;
        img=x1.img+x2.img;
    }

    void display(){
        cout<<real<<" "<<"i"<<img<<endl;
    }
};
int main(){
    complex c1;
    c1.real=2;
    c1.img=4;

    complex c2;
    c2.real=3;
    c2.img=5;

    complex c3;
    c3.sum(c1,c2);
    c3.display();
    return 0;
}