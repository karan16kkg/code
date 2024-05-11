#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    void setdata(int r,int i){
        real=r;
        img=i;
    }

    friend complex sum(complex c1,complex c2);
    void display(){
        cout<<real<<" + i"<<img<<endl;
    }
};

complex sum(complex c1, complex c2){
    complex c3;
    c3.setdata((c1.real + c2.real),(c1.img + c2.img));
    return c3;
}
int main(){
    complex c1,c2,c3;
    c1.setdata(2,3);
    c2.setdata(5,7);
    c3=sum(c1,c2);
    c3.display();
    return 0;
}