/*
Q1. Selection of MPCS exams include a fitness test which is conducted on ground.There will be a batch of 3 trainees,appearing for a running test on track for 3 rounds.
 
You need to record their oxygen level after every round.After trainees are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and select the one with the highest average oxygen level as the most fit trainee. If more than one trainee attains the same highest average level,they all need to be selected. Display the most fit trainee(or trainers) and the highest average oxygen level.

Note:
1.The oxygen value entered should not be accepted if it is not in the range between 1 and 100. 2.If the calculated maximum average oxygen value of the trainees is below 70 then declare the trainees as unfit with meaningful message as “All trainees are unfit”
3.Average oxygen values should be rounded Example 1:
INPUT Values 95
92
95
92
90
92
90
92
90


OUTPUT Values Trainee Number: 1
Trainee Number ;3
Note:Input should be 9 integer values representing oxygen levels entered in order as Round 1:
Oxygen value of trainee 1 Oxygen value of trainee 2 Oxygen value of trainee 3

Round 2:
Oxygen value of trainee 1 Oxygen value of trainee 2 Oxygen value of trainee 3

Round 3:
Oxygen value of trainee 1
 
Oxygen value of trainee 2 Oxygen value of trainee 3

Oxygen must be in given format as in above example.For any wrong input final output should display “INVALID INPUT”

*/
#include<bits/stdc++.h>
using namespace std;
void max(int num1,int num2,int num3){
	int maximum;
	maximum=max(num1,max(num2,num3));
	if(maximum<70){
		cout<<"ALL TRANEES ARE UNFIT"<<endl;
	}
	else{
		if(num1==maximum){
			cout<<"Tranee Number:1"<<endl;
		}
		if(num2==maximum){
			cout<<"Tranee Number:2"<<endl;
		}
		if(num3==maximum){
			cout<<"Tranee Number:3"<<endl;
		}
		cout<<"maximum average is:"<<maximum<<endl;
	}
}
int main(){
	int oxy_level,temp=0;
	int tranee_avg[3]={0};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>oxy_level;
			if(oxy_level>=1 && oxy_level<=100){
				tranee_avg[j]+=oxy_level;
			}
			else{
				temp+=1;
			}
		}
	}
		tranee_avg[0]=tranee_avg[0]/3;
		tranee_avg[1]=tranee_avg[1]/3;
		tranee_avg[2]=tranee_avg[2]/3;

	if(temp==0){
		max(tranee_avg[0],tranee_avg[1],tranee_avg[2]);
	}
	else{
		cout<<"INVALID OUTPUT"<<endl;
	}
	return 0;
}