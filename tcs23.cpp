#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string> team;
	string s;
	int total_matches=0;
	while(cin>>s && s!="q" && team.size()<12){
		team.push_back(s);
	}
	if(team.size()>=4){
		for(int i=0;i<team.size();i++){
			for(int j=i;j<team.size();j++){
				if(j!=i){
					total_matches+=1;
					cout<<team[i]<<"-VS-"<<team[j]<<endl;
				}
			}
		}
		cout<<"TOTAL MATCHES TO BE PLAYED:"<<total_matches<<endl;
	}
	return 0;
}