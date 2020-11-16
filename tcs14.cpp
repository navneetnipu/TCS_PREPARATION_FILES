/*
Q2. A string or character array containing array Mobile numbers is provided . Verify these five mobile numbers and identify valid as well as Invalidnnumbers. Any mobile number is greater than 10 digits or any characters is considered as invalid. Write a code which will generate a report on the count of total number of invalid mobile numbers. A valid Mobile number ‘M’ should be digit of length 10 with all numeric digits. Do not use any input message. Directly accept Mobile Numbers one after another as input and enter “q” or “Q” to stop as taking input.
Example 1:
9892568790
989A2568790
9992568790
999256879099
Q
Output:
3
Note:
1. Output should be in format <integer>
2. If a user enters a set of Mobile Numbers containing less than 5 or more than 5 values, display “ INPUT LIMIT is 5” and quit.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	string c;
	int temp=0,limit=-1;
	do{
		cin>>c;
		stringstream ss(c);
		int x=0;
		ss>> x;
		if(c!="q" || c!="Q"){
			limit+=1;
		}
		if(c.size()==10 && x>0 && (x/1000000000) >=1 ){
			temp+=1;
		}
	}while(c!="q" && c!="Q");
	if(limit>5 || limit<5){
		cout<<"INPUT LIMIT is 5"<<endl;
	}
	else{
		cout<<"\n"<<temp<<endl;
	}
	return 0;
}