// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=0;
//     int b=1;
//     int c=1;
//     cout<<0<<" ";
//     for(int i=0;i<n;i++){
//         cout<<c<<" ";
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     for(int i=0;i<k;i++){
//         int temp=arr[n-1];
//         for(int j=n-1;j>0;j--){
//             arr[j]=arr[j-1];
//         }
//         arr[0]=temp;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[4]={2,6,8,9};
//     int arr2[3]={1,5,7};
//     int i=0,j=0,k=0;
//     int arr[7];
//     while(i<4 && j<3){
//         if(arr1[i]<arr2[j]){
//             arr[k]=arr1[i];
//             k++;
//             i++;
//         }
//         else{
//             arr[k]=arr2[j];
//                 k++;
//                 j++;
//         }
//     }
//     while(i<4){
//         arr[k]=arr1[i];
//         i++;
//         k++;
//     }
//     while(j<3){
//         arr[k]=arr2[j];
//         j++;
//         k++;
//     }
//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void no(int n){
//     if(n==0){
//         return;
//     }
//     no(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     no(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n<=1){ 
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     cout<<fib(5)<<endl;
//     for(int i=0;i<=5;i++){
//         cout<<fib(i)<<" ";
//     }
//     return 0;
// }
