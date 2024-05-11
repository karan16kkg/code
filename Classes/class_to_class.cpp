#include<iostream>
using namespace std;
class product{
    private:
    int m,n;

    public:
    void setdata(int x,int y){
        m=x;
        n=y;
    }

    int getm(){
        return m;
    }
     int getn(){
        return n;
     }
    void show(){
        cout<<m<<" "<<n<<endl;
    }
};
class item{
    private:
    int a,b;

    public:
    item(){};

    item(product p){
        a=p.getm();
        b=p.getn();
    }

    void show(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    item i1;
    product p1;
    p1.setdata(2,3);
    p1.show();

    i1=p1;
    i1.show();
    return 0;
}
