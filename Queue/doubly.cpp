#include<iostream>
using namespace std;
class queue{
    public:
    int*arr;
    int size;
    int rear;
    int front;
    queue(int size){
        this->size=size;
        arr=new int[size];
        rear=-1;
        front=-1;
    }
    void push_front(int data){
        if((front==0 && rear==size-1) || (front == (rear+1)%size)){
            cout<<"Queue is full"<<endl;
            return;
        }
        else if(front ==-1){
            front = rear = 0;
        }
        else if(front == 0 && rear!=size-1){
            front=size-1;
        }
        else{
            front --;
        }
        arr[front]=data;
    }
    void push_back(int data){
        if((front == 0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
            return;
        }
        else if(front ==-1){
            front =rear=0;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=data;
    }
    int pop_front(){
        int ans;
        if(front == -1 && rear==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        ans=arr[front];
        if(front==rear){
            front=rear=-1;
        }
        else if(front == size-1){
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }
    int pop_back(){
        int ans;
        if(front == -1 && rear == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        ans=arr[rear];
        if(rear==front){
            rear=front=-1;
        }
        else if(rear==0){
            rear=size-1;
        }
        else{
            rear--;
        }
        return ans;
    }
};
int main(){
    queue qe(4);
    qe.push_front(1);
    qe.push_front(2);
    qe.push_back(3);
    cout<<qe.pop_front()<<endl;
    cout<<qe.pop_front()<<endl;
    // cout<<qe.pop_front()<<endl;
    cout<<qe.pop_back()<<endl;
    // cout<<qe.pop_front()<<endl;
    return 0;
}