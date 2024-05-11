//reaching the end from start
#include<iostream>
using namespace std;
void destination(int st,int end){
    if(st==end){
        return;
    }
    cout<<st<<" ";
    st++;

    destination(st,end);
}
int main(){
    int st,end;
    cin>>st>>end;
    destination(st,end);
    return 0;
}