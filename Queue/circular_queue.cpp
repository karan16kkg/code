#include<iostream>
using namespace std;
class queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    queue(int size){
        this->size=size;
        arr=new int[size];
        front=rear=-1;
    }
    void push(int data){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(rear==size-1 && front!=0){
            rear=0;   //to maintain circular nature
        }
        else{
            rear++;
        }
        arr[rear]=data;
    }
    int pop(){
        if(front==-1){
            cout<<"Queue empty"<<endl;
            return -1;
        }
        int ans=arr[front];
        if(front==rear){
            front=rear=-1;
        }
        else if(front ==size-1){
            front=0;
        }
        else{
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
    // qe.push(5);
    return 0;
}