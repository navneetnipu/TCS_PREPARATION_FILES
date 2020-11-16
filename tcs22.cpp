#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int a=0,e=0,i=0,o=0,u=0;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]=='a' || s[i]=='A'){
			a+=1;
		}
		else if(s[i]=='e' || s[i]=='E'){
			e+=1;
		}
		else if(s[i]=='o' || s[i]=='O'){
			o+=1;
		}
		else if(s[i]=='i' || s[i]=='I'){
			i+=1;
		}
		else if(s[i]=='u' || s[i]=='U'){
			u+=1;
		}
		else{
			cout<<s[i];
		}
	}
	cout<<endl;
	if(a==0 && e==0 && i==0 && o==0 && u==0){
		cout<<"0"<<endl;
	}
	else{
		cout<<"a:"<<a<<endl;
		cout<<"e:"<<e<<endl;
		cout<<"i:"<<i<<endl;
		cout<<"o:"<<o<<endl;
		cout<<"u:"<<u<<endl;
	}
	return 0;
}