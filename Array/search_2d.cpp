//find a given element in 2d_array 
#include<iostream>
using namespace std;
int main() {
    int n,m;
    cout<<"Enter the no of rows and columns"<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin>>arr[i][j];
        }
    }
    int element;
    cout<<"Enter the element want to found : ";
    cin>>element;
    int r=0,c=m-1;
    while(r<n and c>=0){
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(arr[i][j]==element){
                    cout<<"Element found";
                }
                else if(arr[i][j]>element){
                    c--;
                }
                else if(arr[i][j]<element){
                    r++;
                }
            }
        }
    }
    return 0;
}