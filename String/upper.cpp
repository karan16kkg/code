//converting a string to lower or upper case
#include<iostream>
using namespace std;
char to_lower(char ch){
	if(ch>='a' && ch<='z'){
		return ch;
	}
	else{
		char temp=ch-'A'+'a';
		return temp;
	}
}
char to_upper(char ch){
	if(ch>='A' && ch<='Z'){
		return ch;
	}
	else{
		char temp=ch-'a'+'A';
		return temp;
	}
}
int main(){
	string str;
	cin>>str;
    for(int i=0;i<str.size();i++){
		str[i]=to_upper(str[i]);
	}
	cout<<str<<endl;

	for(int i=0;i<str.size();i++){
		str[i]=to_lower(str[i]);
	}
	cout<<str;
	return 0;
}