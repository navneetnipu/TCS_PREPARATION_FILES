/*
Q2. At an exam center, M number of students are allocated for one classroom as per the University Rules. The Examination staff has made sitting arrangements where the classroom contains N number of benches arranged in columns separated by a suitable distance occupying room space from the left to the right wall.
Given, M = 10 , N=5
Students from class "TY" can sit one after the other from the 1st bench starting at the left wall in the order of their Roll Numbers. And students from class "SY" are allowed to sit beside the students from class 'TY" in the order of their Roll Numbers one after the other. All students enter the classroom in a random order as input in String Array Students[ ]. Few students may remain absent. Assume the Roll Numbers are in continuous range with no drop, and Class Name("TY","SY") should be prefixed for every Roll Number. For example, you can pass Input with values like:
Students = [“TY01”, “TY02”, “SY01”, “SY05”, “SY04”, “TY03”, “SY02”, “TY04”, “SY03”, “TY05”]
Display the sitting arrangement status at the exam time. “ABSENT” should be marked at the place of the Roll Numbers of missing or absent students.
Example 1:
Input Values(Input format should be same as below)
TY01
TY02
SY01
SY05
SY04
TY03
SY02
TY04
SY03 
Output Values
[TY01][SY01]
[TY02][SY02]
[TY03][SY03]
[TY04][SY04]
[ABSENT][SY05]
Note: Output should be in the format given in above example.
If input values are more than M, display INVALID INPUT.
If input value contains other than class SY or TY display INVALID INPUT.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

	vector<string> TY_class;
	vector<string> SY_class;
	int M=10,temp=0;
	while(M--){
		string s;
		cin>>s;
		if(s[0]=='T'&& s[1]=='Y'){
			TY_class.push_back(s);
		}
		else if(s[0]=='S' && s[1]=='Y'){
			SY_class.push_back(s);
		}
		else{
			temp+=1;
		}
	}
	sort(TY_class.begin(),TY_class.end());
	sort(SY_class.begin(),SY_class.end());
	if(temp==0){
		for(int i=1;i<5;i++){
			/*cout<<"["<<TY_class[i]<<"]";
			cout<<"["<<SY_class[i]<<"]"<<endl;
			*/
			if(TY_class.[1]-TY_class[i-1]==1){
				cout<<TY_class[i];
			}
			else{
				TY_class[i]="ABSENT";
				cout<<TY_class[i];
			}
		}
	}
	else{
		cout<<"INVALID INPUT"<<endl;
	}
	return 0;
}