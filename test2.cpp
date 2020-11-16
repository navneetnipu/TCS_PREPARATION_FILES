#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,temp,count=0;
	float f;
	vector<string> names;
	vector<float> height;
	cin>>m;
	string c;
	while(cin>>c && c!="q" && c!="Q"){
		names.push_back(c);
	}
	temp=names.size();
	while(temp-- ){
		cin>>f;
		height.push_back(f);
	}
	vector<float> height_temp=height;
	sort(height.begin(),height.end(),greater<float>());
	for(int i=0;i<m;i++){
		for(int j=0;j<height_temp.size();j++){
			if(height_temp[j]==height[i] && count<m){
				cout<<names[j]<<endl;
				height_temp[j]=0;
				count+=1;
			}
		}
	}
}