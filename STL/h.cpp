#include<iostream>
using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	}
	return b;
}

int score(int *a,int s,int e){
	int cnt=0;
    // base case
	if(s>=e){
		return 0;
	}
    
	// recursive case
	for(int i=s;i<=e;i++){
		// left sum
		int left = 0;
		for(int j=s;j<=i;j++){
			left += a[j];
		}
		// right sum
		int right = 0;
		for(int j=i+1;j<=e;j++){
			right += a[j];
		}
		if(left == right){
			return 1+max(score(a,s,i),score(a,i+1,e));
		}
	}
	return 0;
}

int main(){
	int a[10000];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cout << score(a,0,n-1) <<endl;
	return 0;
}