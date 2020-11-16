#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<string,int> &a,const pair<string,int> &b){ 

    return a.first!=b.first ? (a.first < b.first): (a.second < b.second); 
} 
int main(){
	vector<pair<string,int>> name;
	int n;
	cin>>n;
	while(n--){
		string s;
		int d;
		cin>>s;
		cin>>d;
		name.push_back(make_pair(s,d));
	}
	sort(name.begin(),name.end(),cmp);

	for(int i=0;i<name.size();i++){
		cout<<name[i].first<<":"<<name[i].second<<endl;
	}
	
	return 0;
}