#include<iostream>
#include<string>
using namespace std;
class binary{
    public:
    string s;

    void display(){
        for(int i=0;i<s.size();i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    void ones_compliment(void){
        for(int i=0;i<s.size();i++){
            if(s.at(i)=='1'){
                s.at(i)= '0';
            }
            else{
                s.at(i)== '1';
            }
        }
    }
};
int main(){

    binary b;
    // b.s="0102";
    cin>>b.s;
    b.display();
    // b.ones_compliment();
    // b.display();
    return 0;
}