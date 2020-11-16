#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,reverse_num=0,q;
	cin>>num;
	q=num;
	while(q>0){
		int r;
		r=q%10;
		q=q/10;
		reverse_num=reverse_num*10 + r;
	}
	cout<<reverse_num<<endl;
	if(num==reverse_num){
		cout<<"PALINDROM"<<endl;
	}
	else{
		cout<<"NOT A PALINDROM"<<endl;
	}
	return 0;
}