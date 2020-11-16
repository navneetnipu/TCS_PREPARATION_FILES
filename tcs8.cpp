/*
Q2 . In one pass, Train A can start from source station at time Troj ,halt at each station for h unit of time until it reaches the last station at time T(n-1], where n is the positive Integer representing total number of stations.
Given, Train A's timings
T [0] = 10.00	T [1] = 10.04	T[2] = 10.09	T [3] = 10.15	T[4] = 10.19	T[5] = 10.22.
Now, suppose Railway Admin want to add more trains to increase the frequency. So, to launch other Train B, for the same stations as of Train A's. Provided the train B starts at time t, they would like to know the timings for train B.
The program should return a String array S (timestamps(in float) for train B at each station from first to last station like train A).
Note that time is represented in 24 Hour Fashion. startHour should be in range 0... 23.
startMinute should be in range 0.	59.
Enter start time(24 Hrs)
Example 1:
11.00
11.00 11.04 11.09 11.15 11.19 11.22
Example 2:
-26.15

INVALID INPUT
Note: Input and Output should be formatted as given in example.
For any wrong value input display “INVALID INPUT”

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	char c;
	int hour,min;
	cin>>hour>>c>>min;
	if(hour>=10 && hour<=23 && min>=0 && min<=59){
		int arr_hour[6]={hour,hour+(min+4)/60,hour+(min+9)/60,hour+(min+15)/60,hour+(min+19)/60,hour+(min+22)/60};
		int arr_min[6]={min,(min+4)%60,(min+9)%60,(min+15)%60,(min+19)%60,(min+22)%60};
		for(int i=0;i<6;i++){
			cout<<setw(2) <<setfill('0') << arr_hour[i]<<c<<setw(2) <<setfill('0') << arr_min[i]<<"  ";//organising data to 2 digit places

		}
	}
	else{
		cout<<"INVALID INPUT"<<endl;
	}
	cout<<endl;
}