// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         return ;
//     }
//     print(n-1);
//     cout<<n<<" ";
// }

// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// int fibonachi(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibonachi(n-1)+fibonachi(n-2);
// }

// int power(int n){
//     if(n==0){
//         return 1;
//     }
//     int chota_ans=power(n/2);
//     if(n&1){
//         return 2*chota_ans*chota_ans;
//     }
//     else{
//         return chota_ans*chota_ans;
//     }
// }
// int main(){
//     // print(5);
//     // cout<<factorial(5);
//     // cout<<fibonachi(5);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void print(string arr[],int n){
//     if(n==0){
//         return;
//     }
//     int rem=n%10;
//     n=n/10;
//     print(arr,n);
//     cout<<arr[rem]<<" ";
// }
// int main(){
//     string arr[]={"Zero","One" ,"Two","Three","Four","Five","Six","Seven","Eight","Nine"};
//     print(arr,100);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool issorted(int arr[],int n){
//     if(n>=5){
//         return true;
//     }
//     if(arr[n]<arr[n-1]){
//         return false;
//     }
//     return issorted(arr,n+1);
// }
// int main(){
//     int arr[]={1,2,7,4,5};
//     cout<<issorted(arr,1);
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void subarray(vector<int>input,vector<int>output,int n){
//     if(n>=input.size()){
//         for(auto i : output){
//             cout<<i<<" "; 
//         }
//         cout<<endl;
//         return;
//     }
//     subarray(input,output,n+1);

//     output.push_back(input[n]);
//     subarray(input,output,n+1);
// }
// int main(){
//     vector<int>arr={1,2,3};
//     vector<int>output;
//     subarray(arr,output,0);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int stairs(int n){
//     if(n<0){
//         return 0;
//     }
//     if(n==0 || n==1){
//         return 1;
//     }
//     return stairs(n-1)+stairs(n-2)+stairs(n-3);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<stairs(n);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(string str,vector<char>output,int n){
//     if(n>=str.size()){
//         for(auto i : output){
//             cout<<i<<" "; 
//         }
//         cout<<endl;
//         return;
//     }
//     subset(str,output,n+1);

//     output.push_back(str[n]);
//     subset(str,output,n+1);
// }
// int main(){
//     string str;
//     cin>>str;
//     vector<char>output;
//     subset(str,output,0);
//     return 0;
// }

#include<iostream>
using namespace std;
void permutation(string str,int idx){
    if(idx>=str.size()){
        cout<<str<<endl;
        return;
    }
    for(int i=idx;i<str.size();i++){
        swap(str[i],str[idx]);
        permutation(str,idx+1);
        swap(str[i],str[idx]);
    }
}
int main(){
    string str;
    cin>>str;
    permutation(str,0);
    return 0;
}