#include<iostream>
using namespace std;
class employee{
    int id;
    static int count; //by default it is initialised with zero
    public:
    void setdata(){
        cout<<"Enter the id of an employee : ";
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"Id of an employee is : "<<id<<endl;//<<" and count is : "<<count<<endl;
    }
    static void getcount(){
        cout<<"The value of count is : "<<count<<endl;
    }
};
int employee :: count;
int main(){
    employee e;
    e.setdata();
    e.getdata();
    employee :: getcount();
    employee f;
    f.setdata();
    f.getdata();
    employee :: getcount();
    return 0;
}