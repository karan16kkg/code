//for finding the element having no pair by using xor operation
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,ans=0;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++){
		ans=ans^arr1[i];
	}
	cout<<ans;
	return 0;
}