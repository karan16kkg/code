// #include<iostream>
// using namespace std;
// class complex {
//     private:
//     int a;
//     int b;
//     public:
//     complex(){};
//     complex(int x,int y){
//         a=x;
//         b=y;
//     }

//     complex operator+(complex c){
//         complex c3;
//         c3.a = a + c.a;
//         c3.b = b + c.b;
//         return c3;
//     }

//     void print(){
//         cout<<a<<" i"<<b<<endl;
//     }
// };
// int main(){
//     complex c1(1,2),c2(3,5),c3;
//     c1.print();
//     c3=c1+c2;
//     c3.print();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class complex{
//     int a;
//     int b;
//     public:
//     complex(){};
//     complex(int x,int y){
//         a=x;
//         b=y;
//     }

//     complex operator-(){
//         complex c;
//         c.a=-a;
//         c.b=-b;
//         return c;
//     }
//     void print(){
//         cout<<a<<" i"<<b<<endl;
//     }
// };
// int main(){
//     complex c1(2,5);
//     c1.print();
//     complex c2=-c1;
//     c2.print();
//     return 0;
// }

// pre increment

#include<iostream>
using namespace std;
class integer{
    int x;
    public:
    integer(){};
    integer(int a){
        x=a;
    }

    integer operator++(){
        integer i;
        i.x=++x;
        return i;
    }

    integer operator++(int){
        integer i;
        i.x=x++;
        return i;
    }
    void print(){
        cout<<x<<endl;
    }
};
int main(){
    integer i(5);
    i.print();
    integer i2=++i;
    i2.print();
    i.print();

    integer i3=i2++;
    i3.print();
    i2.print();
    return 0;
}