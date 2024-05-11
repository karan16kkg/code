#include<iostream>
using namespace std;
class complex{
    private:
    int a;
    int b;

    public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }

    operator int(){
        return (a+b);
    }
    void show(){
        cout<<a<<" i"<<b<<endl;
    }
};
int main(){
    complex c1;
    c1.setdata(2,3);
    c1.show();
    int x;
    x=c1;
    cout<<x<<endl;
    return 0;
}