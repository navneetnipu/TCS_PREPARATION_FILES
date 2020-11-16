/*
Q1. WASHING MACHINE
A Washing Machine works on the principle of a Fuzzy system, the weight of clothes put inside it for wash is uncertain. But based on weight measured by sensors, it decides time and water levels which can be changed by menus given on the machine control area. For low Water level, time estimate is 25 minutes, where approximate weight is 2000 grams or any non-zero positive number below that.
For Medium Water level, time estimated is 35minutes, where approximate weight is between 2001 grams and 4000 grams.
For High Water level, time estimated is 45 Minutes, where approximate weight is above 4000 grams.
Assume the Capacity of the Machine is maximum 7000 grams.
Where the approximate weight is zero, the time estimate is 0 minutes. Write a function which takes numeric weight in the range [0,7000] as input and produces estimated time as output; if
input is more than 7000, then output is: "OVERLOADED!", and for all other inputs, the output statement is "INVALID INPUT”.
Input should be in the form of integer value -
<Integer>
Output must have the following format -
TimeEstimated: <Integer> Minutes
Example 1
Input Value
2000
Output Value
Time Estimated: 25 Minutes
*/
#include<bits/stdc++.h>
using namespace std;
int washing_machine(int load){
	if(load==0){
		cout<<"TimeEstimated:0 Minutes"<<endl;
	}
	else if(load>7000){
		cout<<"OVERLOADED!"<<endl;
	}
	else if(load>0 && load <=2000){
		cout<<"TimeEstimated:25 Minutes"<<endl;
	}
	else if(load>2000 && load <=4000){
		cout<<"TimeEstimated:35 Minutes"<<endl;
	}
	else if(load>4000 && load <=7000){
		cout<<"TimeEstimated:45 Minutes"<<endl;
	}
	else{
		cout<<"INVALID INPUT"<<endl;
	}

}
int main(){
	int load;
	cin>>load;
	washing_machine(load);
}