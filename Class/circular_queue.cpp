#include<iostream>
using namespace std;
class queue{
    public:
    int*arr;
    int size;
    int s;
    int e;
    queue(int size){
        this->size=size;
        arr=new int[size];
        s=-1;
        e=-1;
    }

    void push(int data){
        if(s == -1 && e == -1){
            s=0;
            e=0;

            arr[e]=data;
        }

        else if(((e+1)%size) == s){
            cout<<"queue is full"<<endl;
            return;
        }

        else{
            e=((e+1)%size);
            arr[e]=data;
        }
    }

    void pop(){
        if(s == -1 && e == -1){
            cout<<"queue is empty";
            return;
        }
        else{
            cout<<arr[s];
            s=((s+1)%size);
        }
    }
};
int main(){
    queue qe(4);
    qe.push(1);
    qe.push(2);
    qe.push(3);
    qe.push(4);
    qe.push(5);
    qe.pop();
    return 0;
}