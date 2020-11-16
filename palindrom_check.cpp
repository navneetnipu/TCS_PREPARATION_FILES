#include<bits/stdc++.h>
using namespace std;
int main(){
	/*string s;
	cin>>s;
	string dub=s;
	for(int i=0;i<s.size();i++){
		dub[i]=s[s.size()-1-i];
	}
	if(dub==s){
		cout<<s<<":"<<dub<<endl;
		cout<<"PALINDROM"<<endl;
	}
	else{
		cout<<s<<":"<<dub<<endl;
		cout<<"NOT A PALINDROM"<<endl;
	}*/
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]){
			count+=1;
		}
	}
	if(count==0){
		cout<<"PALINDROM"<<endl;
	}
	else{
		cout<<"NOT A PALINDROM"<<endl;
	}

}