#include<iostream>
using namespace std;
class shop{
    int itemid[100];
    int itemprice[100];
    int count=0;

    public:
    void setdata(){
        cout<<"Enter the item id : ";
        cin>>itemid[count];

        cout<<"Enter the item price : ";
        cin>>itemprice[count];

        count++;

        cout<<endl;
    }

    void display(){
        for(int i=0;i<count;i++){
            cout<<"The item id is : "<<itemid[i]<<endl;
            cout<<"The item price is : "<<itemprice[i]<<endl;
            // cout<<endl;
        }
    }
};
int main(){
    shop s;
    s.setdata();
    s.setdata();
    s.setdata();
    s.display();
    return 0;
}