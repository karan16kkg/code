#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int*arr;
    int top1;
    int top2;
    stack(int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }

    void push1(int data){
        if(top2-top1>1){
            top1++;
            arr[top1]=data;
        }
        else{
            cout<<"stack Overflow"<<endl;
        }
    }

    void push2(int data){
        if(top2-top1>1){
            top2--;
            arr[top2]=data;
        }
        else{
            cout<<"stack Overflow"<<endl;
        }
    }

    int pop1(){
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
           return -1;
        }
    }

    int pop2(){
        if(top2<=size-1){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};

int main(){
    stack st(5);
    st.push1(1);
    st.push1(2);
    cout<<st.pop1()<<endl;
    cout<<st.pop1()<<endl;;

    st.push2(3);
    st.push2(4);
    cout<<st.pop2()<<endl;
    cout<<st.pop2();
    return 0;
}