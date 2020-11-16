#include<bits/stdc++.h>
using namespace std;
void rev_str(string str,int index){
	if(index>=0){
		//cout<<str[index];
		rev_str(str,index-1);
		cout<<str[index];
	}
}
int main(){
		int i=0,len;
		string str;
		cin>>str;
		len=str.size();
		i=len-1;
		rev_str(str,i);
	return 0;
}