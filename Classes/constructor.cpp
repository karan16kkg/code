#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(int r,int i){
        real=r;
        img=i;
    }

    void display(){
        cout<<real<<" + i"<<img<<endl;
    }
};
int main(){
    complex c(2,3);
    c.display();
    return 0;
}