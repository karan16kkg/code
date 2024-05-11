#include<iostream>
#include<cstring>
using namespace std;
class hero{
    int health;
    public:
    char level;
    char*name;

    int gethealth(){  //for printing the value of private parameter in a class
        return health;
    }
    void sethealth(int h){ //for assigning the value to private parameter in a class
        health=h;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }

    //constructor
    hero(){
        cout<<"Constructor called"<<endl;
        this->name=new char[100];
    }

    //parametrised constructor
    hero(int health,char level){
        this->health=health;
        this->level=level;  
    }

    //copy constructor
    hero(hero&temp){
        this->health=temp.health;
        this->level=temp.level;
    }

    //print function
    void print(){
        cout<<" Health: "<<this->health<<endl;
        cout<<" Level: "<<this->level<<endl;
        cout<<" Name: "<<this->name<<endl;
    }

    //destructor
    ~hero(){
        cout<<"destructor called"<<endl;
    }
};
int main(){
    hero h; //at this time constructor will call
    h.sethealth(6);
    h.level='a';
    cout<<h.gethealth()<<endl;
    cout<<h.level<<endl;

    hero temp(7,'b'); //parametrised constructor value assigning
    cout<<temp.gethealth()<<endl;
    cout<<temp.level<<endl;


    hero s(temp); //copy constructor using parametrised constructor
    cout<<s.gethealth()<<endl;
    cout<<s.level<<endl;


    hero n;
    n.sethealth(4);
    n.level='c';
    char name[60] = "hello i m karan";
    n.setname(name);
    n.print();


    hero*b=new hero;  //at this time constructor will call
    delete b;  //for calling the destructor

    return 0;
}