#include <bits/stdc++.h> 
// #include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>v1;
   for(int i=0;i<5;i++){
    v1.push_back(i+1);
   }

   for(int i=0;i<5;i++){
    cout<<v1[i]<<" ";
   }
   cout<<endl;

   v1.pop_back();

   cout<<"Element at "<<v1.at(2)<<endl;

   cout<<"Element at first "<<v1.front()<<endl;
   cout<<"Element at last "<<v1.back()<<endl;

   vector<int> :: iterator it=v1.begin();
   v1.insert(it+2,34);
   for(int i=0;i<5;i++){
    cout<<v1[i]<<" ";
   }
   cout<<endl;
   sort(v1.begin(),v1.end());
   for(int i=0;i<5;i++){
    cout<<v1[i]<<" ";
   }
   cout<<"Capacity "<<v1.capacity()<<endl;
   cout<<"Size "<<v1.size()<<endl;
    return 0;
}