// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n<=0){
//         return;
//     }
//     if(n%2!=0){
//         cout<<n<<endl;
//     }
//     print(n-1);
//     if(n%2==0){
//         cout<<n<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
//     return 0;
// }

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
void parentheses(string str,int n,int left,int right,vector<string>&arr){
    if(left==n && right==n){
        arr.push_back(str);
        return;
    }
    if(left<n){
        parentheses(str+'(',n,left+1,right,arr);
    }
    if(left>right){
        parentheses(str+')',n,left,right+1,arr);
    }
}
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>ans;
    parentheses("",n,0,0,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}