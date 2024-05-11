#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[10];
    cin.getline(ch,10);
    cout << ch<<endl;
    int n=strlen(ch);
    cout<<n<<endl;
    int a=0;
    int b=n;
    while(a!=n/2+1){
        if(ch[a]!=ch[b]){
            cout<<"Not palindrome";
            break;
        }
        else{
            a++;
            b--;
        }
    }
    return 0;
}