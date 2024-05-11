#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    int max_sum=0;
    int ans=-1;
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            sum+=arr[j][i]; 
        }
        if(sum>max_sum){
            max_sum=sum;
            ans=j;
            sum=0;
        }
    }
    cout<<max_sum<<" "<<ans;
    return 0;
}