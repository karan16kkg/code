#include<iostream>
#include<string>
using namespace std;
class strings{
    private:
    string str;
    public:
    strings(){}
    strings(string s1){
        str=s1;
    }

    bool operator<(strings s1){
        if(str.compare(s1.str)<0){
            return true;
        }
        else{
            return false;
        }
    }
    bool operator>(strings s1){
        if(str.compare(s1.str)>0){
            return true;
        }
        else{
            return false;
        }
    }

    bool operator==(strings s1){
        if(str==s1.str){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    strings s1("abcd");
    strings s2("abcde");
    if(s1<s2){
        cout<<"s1 smaller tha s2"<<endl;
    }
    else if(s1>s2){
        cout<<"s2 smaller tha s1"<<endl;
    }
    else if(s1==s2){
        cout<<"both are equal"<<endl;
    }
    return 0;
}