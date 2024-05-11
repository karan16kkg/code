#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1;
    l1.push_back(1);
    l1.push_back(5);
    l1.push_back(2);
    l1.push_back(9);
    list<int>::iterator p=l1.begin();
    while(p!=l1.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;

    cout<<l1.size()<<endl;
    // l1.pop_back();
    // cout<<l1.size()<<endl;
    // l1.pop_front();
    // cout<<l1.size()<<endl;
    l1.sort();
    list<int>::iterator q=l1.begin();
     while(q!=l1.end()){
        cout<<*q<<" ";
        q++;
    }
    cout<<endl;
    
    return 0;
}
