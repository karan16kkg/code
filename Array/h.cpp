// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool sr_turn=true;
//     int sr_score=0;
//     int dm_score=0;
//     int left=0;
//     int right=n-1;
//     while(left<=right){
//         if(sr_turn){
//             sr_score+=max(arr[left],arr[right]);
//         }
//         else{
//             dm_score+=max(arr[left],arr[right]);
//         }
//         if(arr[left]>arr[right]){
//             left++;
//         }
//         else{
//             right--;
//         }
//         sr_turn=!sr_turn;
//     }

//     cout<<sr_score<<" "<<dm_score;
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
//     int s=0;
//     int e=n-1;
//     int ans=0;
//     while(s<e){
//         int mid=(s+e)/2;
//         if(arr[mid]>arr[s]){
//             s=mid+1;
//         }
//         else if(arr[mid]<arr[s]){
//             ans=mid;
//             e=mid;
//         }
//     }
//     cout<<ans;
//     return 0;
// }

// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int>arr2;
//     int max_no=arr[n-1];
//     arr2.push_back(max_no);
//    for(int i=n-2;i>=0;i--){
//         if(arr[i]>max_no){
//             max_no=arr[i];
//             arr2.push_back(max_no);
//         }
//     }
//     reverse(arr2.begin(),arr2.end());
//     for(int i=0;i<arr2.size();i++){
//         cout<<arr2[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
class rectangle{
    private:
    float length;
    float width;
    public:
    void setlength(float length){
        this->length=length;
    }
    void setbreadth(float width){
        this->width=width;
    }
    float area(float length,float breadth){
        return length*breadth;
    }
    float perimeter(float length,float breadth){
        return 2*(length+breadth);
    }
};
int main(){
    rectangle rec;
    rec.setlength(4.0);
    rec.setbreadth(5.0);
    cout<<rec.area(4,5)<<endl;
    cout<<rec.perimeter(4,5)<<endl;
    return 0;
}