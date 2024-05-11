#include<iostream>
using namespace std;
class dummy{
    private:
    int a;
    int b;

    public:
    dummy(){};
    void setdata(int x,int y){
        a=x;
        b=y;
    }

    dummy(dummy &d){
        a=d.a;
        b=d.b;
    }

    void show(){
        cout<<a<<" "<<b<<endl;
    }

};
int main(){
    dummy d1;
    d1.setdata(1,2);
    d1.show();

    dummy d2(d1);
    d2.show();
    
    return 0;
}