#include<iostream>
using namespace std;
template<class x> class array_list{
    private:
    class control_block{
        public:
        int capacity;
        x * arr_ptr;
    };
    control_block*s;
    public:
    array_list(int capacity){
        s=new control_block;
        s->capacity=capacity;
        s->arr_ptr=new x[s->capacity];
    }
    void add_element(int indx,x data){
        if(indx>=0 && indx < s->capacity){
            s->arr_ptr[indx]=data;
        }
        else{
            cout<<"Not in range"<<endl;
        }
    }

    void view_data(int idx){
        if(idx>=0 && idx < s->capacity){
            cout<<s->arr_ptr[idx];
        }
        else{
            cout<<"Not in range"<<endl;
        }
    }

    void view_array(){
            for(int i=0;i<s->capacity;i++){
                cout<<s->arr_ptr[i]<<" ";
            }
            cout<<endl;
    }

    // delete s;


};
int main(){
    array_list <float> arr(5);
    arr.add_element(0,1);
    arr.add_element(1,2.3);
    arr.add_element(2,3);
    arr.add_element(3,4.6);
    arr.add_element(4,5);

    arr.view_array();
    return 0;
}