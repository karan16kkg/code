// greatest common divisor in two numbers
// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     if(a==0){
//         return b;
//     }
//     else if(b==0){
//         return a;
//     }
//     while(a!=b){
//         if(a>b){
//             a=a-b;
//         }
//         else if(b>a){
//             b=b-a;
//         }
//     }
//     return a;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<gcd(a,b);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<__gcd(a,b)<<endl;  //hcf

    cout<<(a*b)/__gcd(a,b);  //lcm
    return 0;
}