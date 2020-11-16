#include<bits/stdc++.h>
using namespace std;
int main(){
	int N=5;
	int M=10;
	map<int,string> ty;

	map<int,string> sy;
	string s;
	for(int i=0;i<10 && cin>>s;i++){
		stringstream ss;
		string c=s.substr(0,2);
		string xx=s.substr(2);
		ss<<xx;
		int x;
		ss>>x;
	cout<<"C:"<<c<<",x:"<<x<<",S:"<<s<<endl;
		if(c[0]=='T' && c[1]=='Y'){
			ty[x]=s;

		}else if(c[0]=='S' && c[1]=='Y'){
			sy[x]=s;

		}else {

		}
	}
	for(int i=1;i<6;i++){
		if(ty[i].size()==0 && sy[i].size()==0){
			cout<<"[ ABSENT ] [ ABSENT ]"<<endl;
		}else if(sy[i].size()==0){
			cout<<"[  "<<ty[i]<<"  ] [ ABSENT ]"<<endl;
		}else if(ty[i].size()==0){
			cout<<"[ ABSENT ] [  "<<sy[i]<<"  ]"<<endl;

		}else if(ty[i].size()!=0 && sy[i].size()!=0){
			cout<<"[  "<<ty[i]<<"  ] [  "<<sy[i]<<"  ]"<<endl;

		}else{
			cout<<"[ INVALID ] [ INVALID ]"<<endl;
		}
	}

	return 0;

}
