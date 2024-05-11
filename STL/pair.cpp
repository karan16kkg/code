#include<iostream>
using namespace std;
int main(){
    pair<string,int>p1;
    p1=make_pair("Hello",1);
    cout<<p1.first<<" "<<p1.second<<endl;

    return 0;
}