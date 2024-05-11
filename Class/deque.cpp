#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dt;
    dt.push_back(1);
    dt.push_back(2);
    dt.pop_back();
    cout<<dt.size();
    return 0;
}