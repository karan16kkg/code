//it will combine data members and function in a single class
#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age=5;
    int height;
    public:
    int get_age(){
        return age;
    }
};
int main(){
    student s;
    cout<<s.get_age()<<endl;
    return 0;
}