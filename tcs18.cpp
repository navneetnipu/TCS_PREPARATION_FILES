/*
27-8 to 11.
*/
#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<double,string> &a,const pair<double,string> &b){ 
    return (a.first > b.first); 
} 
int main()
{
	int N;
	cout<<"enter N:"<<endl;
	cin>>N;
	string tname;
	vector<pair<double,string>> vp;
	vector<string> names;
	cout<<"enter "<<N<<" names"<<endl;
	while(true){
		cin>>tname;
		if(tname=="q" || tname=="Q"){
			break;
		}
		names.push_back(tname);
	}
	cout<<"Enter Heights:"<<endl;
	for(int i=0;i<names.size();i++){
		double t_height;
		cin>>t_height;
		vp.push_back(make_pair(t_height,names[i]));
	}
	sort(vp.begin(),vp.end(),cmp);
	while(N--){
		cout<<N<<":"<<vp[N].first<<"--->"<<vp[N].second<<endl;
	}

	return 0;
}