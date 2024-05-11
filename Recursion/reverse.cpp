//Reverse a string using recursion
#include<iostream>
using namespace std;
void reverse(string &str,int i,int j){
    //base case
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    //recursive call
    reverse(str,i,j);

}
int main(){
    string str;
    cin>>str;
    int i=0,j=str.size()-1;
    reverse(str,i,j);
    cout<<str;
    return 0;
}