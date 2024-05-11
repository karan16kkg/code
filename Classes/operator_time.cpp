#include<iostream>
using namespace std;
class time{
    int hour,min,sec;
    public:
    time(){};
    time(int hr,int mn,int sc){
        hour=hr;
        min=mn;
        sec=sc;
    }

    time operator+(time t1){
        time t;
        int new_sec=sec+t1.sec;
        int carry_sec=new_sec/60;
        new_sec=new_sec%60;

        int new_min=min+carry_sec+t1.min;
        int carry_min=new_min/60;
        new_min=new_min%60;

        int new_hour=hour+carry_min+t1.hour;
        new_hour=new_hour%24;

        t.hour=new_hour;
        t.min=new_min;
        t.sec=new_sec;

        return t;

    }
    void print(){
        cout<<hour<<" "<<min<<" "<<sec<<endl;
    }
};
int main(){
    int hr,mn,sc;
    cin>>hr>>mn>>sc;
    time t1(hr,mn,sc);
    time t2(12,59,59);

    time t3=t1+t2;
    t3.print();

    return 0;
}