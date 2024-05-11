#include<iostream>
#include<tuple>
using namespace std;
int main(){
    tuple<string, int,int>t1;
    t1=make_tuple("Hello",1,2);
    cout<<std::get<0>(t1)<<" ";
    cout<<std:: get<1>(t1)<<" ";
    cout<<std:: get<2>(t1)<<endl;
    return 0;
}