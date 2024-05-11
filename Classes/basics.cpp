#include<iostream>
using namespace std;
class employee{
    private:
    int a,b;

    public:

    int c,d;

    void setdata(int a1,int b1);
    void getdata(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

void employee:: setdata(int a1,int b1){
    a=a1;
    b=b1;
}

int main(){
    employee e;
    e.setdata(2,3);
    e.getdata();

    e.c=4;
    e.d=5;
    cout<<e.c<<endl;
    cout<<e.d<<endl;
    return 0;
}