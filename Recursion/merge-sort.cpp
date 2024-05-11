// #include<iostream>
// using namespace std;
// void merge(int arr[],int s,int e){
//     int mid=(s+e)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;
//     int *arr1=new int[len1];
//     int *arr2=new int[len2];
//     for(int i=0;i<len1;i++){
//         arr1[i]=arr[i];
//     }
//     int k=mid+1;
//     for(int i=0;i<len2;i++){
//         arr2[i]=arr[k];
//         k++;
//     }
//     int i=0,j=0,m=0;
//     while(i<len1 && j<len2){
//         if(arr1[i]<arr2[j]){
//             arr[m]=arr1[i];
//             i++;
//             m++;
//         }
//         else{
//             arr[m]=arr2[j];
//             j++;
//             m++;
//         }
//     }
//     while(i<len1){
//         arr[m]=arr1[i];
//         i++;
//         m++;
//     }
//     while(j<len2){
//         arr[m]=arr2[j];
//         j++;
//         m++;
//     }
// }
// void mergeSort(int arr[],int s,int e){
//     if(s>=e){
//         return;
//     }
//     int mid=(s+e)/2;


//     // sort left part
//     mergeSort(arr,s,mid);
//     //sort right part
//     mergeSort(arr,mid+1+1,e);
//     //merge the arrays
//     merge(arr,s,e);
// }
// int main(){
//     int arr[]={2,5,1,6,9};
//     mergeSort(arr,0,4);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
void merge(int arr[],int s,int mid,int e){
    int n1=mid-s+1;
    int n2=e-mid;
    int a1[n1];
    int a2[n2];
    for(int i=0;i<n1;i++){
        a1[i]=arr[i];
    }
    for(int i=0;i<n2;i++){
        a2[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a1[i]<a2[j]){
            arr[k]=a1[i];
            i++;
            k++;
        }
        else if(a1[i]>a2[j]){
            arr[k]=a2[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=a1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=a2[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int s,int e){
    if(s<e){
        int mid=(s+e)/2;
        mergesort(arr,s,mid);
        mergesort(arr,mid+1,e);
        merge(arr,s,mid,e);
    }
}
int main(){
    int arr[]={2,5,1,7,6};
    mergesort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}