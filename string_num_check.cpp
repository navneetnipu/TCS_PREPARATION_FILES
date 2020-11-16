#include<bits/stdc++.h>
using namespace std;
int main(){
	string input;
	int temp=0;
	getline(cin,input);
	if(input[0]=='-'){
		temp+=1;
		for(int i=1;i<input.size();i++){
		if(input[i]>='0' && input[i]<='9'){
			temp+=1;
		}
	}
	if(temp==input.size()){
		cout<<"number"<<endl;
	}
	else{
		cout<<"string"<<endl;
	}
	}
	else{
			for(int i=0;i<input.size();i++){
				if(input[i]>='0' && input[i]<='9'){
					temp+=1;
				}
			}
			 if(temp==input.size()){
			 cout<<"number"<<endl;
			 }
	else{
		cout<<"string"<<endl;
	}
	}

	/*stringstream ss(input);
	int x=0;
	ss>>x;
	if(x!=0){
		cout<<"number:"<<x<<endl;
	}
	else if(x==0 && input[0]!='0'){
		cout<<"string:"<<input<<endl;
	}
	else{
		cout<<"number:"<<x<<endl;
	}
	*/
}