#include<bits/stdc++.h>
using namespace std;
int main()
{
	string RS[7]={"PANVEL", "KHANDESHWAR", "MANSAROVAR", "KHARGHAR", "BELAPUR", "SEAWOOD", "NERUL"};
	int T[7]={0,4,5,3,4,5,3};
	float start_time[11]={7.30, 8.2, 12.45, 13.30, 14.44, 15.50, 9.15, 10.20, 23.59, 17.33, 19.20};
	string station;
	float time,total_time=0;
	int number_of_trains_left=0,req=-1,count=0;
	cout<<"Enter current time(hour.min) float"<<endl;
	cin>>time;
	cout<<"PANVEL, KHANDESHWAR, MANSAROVAR, KHARGHAR, BELAPUR, SEAWOOD, NERUL"<<endl;
	cout<<"At which station you are right now? (Choose from above)"<<endl;
	cin>>station;
		for(int i=0;i<7;i++){
		if(RS[i]==station ){
			req=i;
		}
	}
	for(int i=0;i<=req;i++){
		total_time+=T[i];
	}
	for(int i=0;i<11;i++){
		start_time[i]+=total_time;
		if(start_time[i]>=time){
			count+=1;
		}
	}
	if(req!=-1){
		cout<<count<<endl;
	}
	return 0;
}