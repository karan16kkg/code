#include<iostream>
using namespace std;
class human{
    protected:
    int weight;
    int height;
};

class hum : public human{
    public:
    void setweight(int w){
        weight=w;
    }
    void setheight(int height){
        this->height=height;
    }
    int getweight(){
        return weight;
    }

    int getheight(){
        return height;
    }

};
int main(){
    hum m;
    m.setweight(40);
    return 0;
}