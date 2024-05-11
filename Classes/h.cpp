#include<iostream>
#include<cstring>
using namespace std;
class dog{
    public:
    char species[100];
    char name[100];
    int age;

    dog(char*spec,char*nam,int a){
        strcpy(species,spec);
        strcpy(name,nam);
        age=a;
    }

    void print(){
        cout<<species<<endl;
        cout<<name<<endl;
        cout<<age;
    }
};
int main(){
    char spec[20]="hjggfddhvj";
    char name[20]="ghjhjhjkhg";
    dog d(spec,name,2);
    d.print();
    return 0;
}