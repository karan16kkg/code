#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=-1;
    if(arr[0]!=arr[1]){
        ans=arr[0];
    }
    else if(arr[n-1]!=arr[n-2]){
        ans=arr[n-1];
    }
    if (ans == -1)
    {
        int s = 0;
        int e = n - 1;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
            {
                ans = arr[mid];
                break;
            }
            else if(arr[mid]==arr[mid-1]){
                int left_size=(mid-s+1);
                if(left_size%2==0){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else if(arr[mid]==arr[mid-1]){
                int right_size=(e-mid);
            }
        }
    }
    return 0;
}