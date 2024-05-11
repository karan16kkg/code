#include<iostream>
using namespace std;
class complex{
    private:
    int a;
    int b;
    public:
    complex(){};

    complex(int x){
        a=x;
        b=0;
    }
    void setdata(int x,int y){
        a=x;
        b=y;
    }

    void show(){
        cout<<a<<" i"<<b<<endl;
    }
};
int main(){
    complex c1;
    int x=5;
    c1=x;
    c1.show();
    return 0;
}