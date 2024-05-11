#include<iostream>
using namespace std;
class queue{
    public:
    int*arr;
    int size;
    int front;
    int rear;
    queue(int size){
        arr=new int[size];
        this->size=size;
        front=0;
        rear=0;
    }
    void push(int element){
        if(rear==size){
            cout<<"queue if full"<<endl;
        }
        else{
            arr[rear]=element;
            rear++;
        }
    }
    int pop(){
        int ans;
        if(front==rear){
            return -1;

        }
        else{
            ans=arr[front];
            front++;
        }
        return ans;
    }
};
int main(){
    queue qe(4);
    qe.push(1);
    qe.push(2);
    qe.push(3);
    qe.push(4);
    cout<<qe.pop()<<endl;
    cout<<qe.pop()<<endl;
    cout<<qe.pop()<<endl;
    cout<<qe.pop()<<endl;
    cout<<qe.pop()<<endl;
    return 0;
}