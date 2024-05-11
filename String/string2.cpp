#include<iostream>
using namespace std;
int main() {
    string name;
    getline(cin,name);
    int len=name.length();
    int words=0;
    int characters=0;
    for(int i=0;i<len;i++) {
        if(name[i] == ' '){
            words++;
        }
        else{
            characters++;
        }
    }
    cout<<words+1<<endl;
    cout<<characters<<endl;
    return 0;
}
