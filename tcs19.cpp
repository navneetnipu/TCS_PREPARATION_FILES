#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int> queue1;
	vector<int> queue2;
	cin>>n;
	while(n--){
		int age;
		cin>>age;
		if(age<10 || age>100 ){
			cout<<"INVALID INPUT"<<endl;
		}
		else{
			if(age>60 && queue2.size()<5){
				queue2.push_back(age);
			}
			else{
				queue1.push_back(age);
			}
		}
	}
	cout<<"QUEUE1 TIME:  "<<15*(queue1.size())<<" MINS"<<endl;
	cout<<"QUEUE2 TIME:  "<<15*(queue2.size())<<" MINS"<<endl;
	return 0;
}