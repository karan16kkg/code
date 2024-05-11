// #include <bits/stdc++.h>
// using namespace std;

// void lex(int n){
//     vector<string> s;

//     for(int i=1;i<=n;i++){
//         s.push_back(to_string(i));
//     }
//     sort(s.begin(),s.end());
//     for(int i=0;i<n;i++){
//         cout<<s[i]<<" ";
//     }
//     // vector<int> ans;

//     // for(int i=0;i<n;i++) ans.push_back(stoi(s[i]));
//     // for(int i=0;i<n;i++) cout << ans[i] << " ";
// }
// int main(){
//     int n; cin >> n;
//     lex(n);
//     return 0;
// }


#include <bits/stdc++.h>
// #include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>arr;
    for(int i=1;i<=n;i++){
        arr.push_back(to_string(i));
    }
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // vector<int>ans;
    // for(int i=0;i<n;i++){
    //     ans.push_back(stoi(arr[i]));
    // }
    return 0;
}