#include<iostream>
#include<math.h>
using namespace std;
class point{
    int x;
    int y;
    public:
    friend void distance(point p1, point p2);
    point(){

    }
    point(int a,int b){
        x=a;
        y=b;
    }

    void print(){
        cout<<"("<<x<<" , "<<y<<")"<<endl;
    }
};

// void distance(point p1,point p2){
//     float dist;
//     dist=sqrt(pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2));
//     cout<<dist<<endl;
// }

void distance(point p1,point p2){
    point p3;
    p3.x=p2.x-p1.x;
    p3.y=p2.y-p1.y;

    p3.print();
}

int main(){
    point p(1,1);
    p.print();
    point q(1,1);
    q.print();
    distance(p,q);
    return 0;
}