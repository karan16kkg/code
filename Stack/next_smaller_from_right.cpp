//Previous smaller element in an array 
// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[]={1,2,6,4,8};
//     vector<int>ans(5);
//     stack<int>st;
//     st.push(-1);
//     for(int i=0;i<5;i++){
//         while(st.top()!=-1 && st.top()>arr[i]){
//             st.pop();
//         }
//         ans[i]=st.top();
//         st.push(arr[i]);
//     }
//     for(int i=0;i<5;i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }


//Next smaller element in array

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,6,4,8};
    vector<int>ans(5);
    stack<int>st;
    st.push(-1);
    for(int i=4;i>=0;i--){
        while(!st.empty() && st.top()>arr[i]){
            st.pop();
        }
        ans[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<5;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}