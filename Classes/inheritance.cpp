//it is used to acces data members of a class to other class
#include<iostream>
using namespace std;
class human{
    public:
    int height;
    int weight;
    int age;

    public:
    void set_weight(int weight){
        this->weight=weight;
    }
};

class male:public human{

};
int main(){
    male m;
    cout<<m.age<<endl;
    m.set_weight(5);
    cout<<m.weight<<endl;
    return 0;
}