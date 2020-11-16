/*
Q1. A doctor has a clinic where he serves his patients. The doctor's consultation fees are different for different groups of patients depending on their age. If the patient's age is below 17. The fee is 200 INR. If the patient's age is between 17 and 40, fees are 400 INR.
If the patient's age is above 40, fees are 300 INR. Write a code to calculate earnings in a day for which one array/List of values representing age of patients visited on that day is passed as input.
Note:
● Age should not be zero or less than zero or above 120.
● Doctors consult a maximum of 20 patients a day.
● Enter age value (press ENTER without value to stop):
Example 1:
Input
20
30
40
50
2
3
14
Output
Total income 2000 INR
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=0,earning=0,count=0;
	while(cin>>n && n!='q' && count<=20){
		count+=1;
			if(n>0 && n<=120){
				if(n<17){
					earning+=200;
				}
				else if(n>=17 && n<=40){
					earning+=400;
				}
				else{
					earning+=300;
				}
			}
	}
	cout<<"Total income "<<earning<<" INR"<<endl;
	return 0;
}