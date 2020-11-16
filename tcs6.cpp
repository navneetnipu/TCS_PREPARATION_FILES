/*
Q2. There is jar full of candies for sale at a mall counter. JAr has the capacity N, that is JAR can contain maximum N Candies when JAR is full. At any point of time,JAR can have M number of candies where M<=N. Candies are served to the customers. JAR is never remaining empty as when last K candidates are left,JAR is refilled with new candidates in such a way that JAR gets full.
Write the code to implement above scenario.Display JAR at counter with available number of candies.
Input should be number of candies one customer orders at point of time. Update the JAR after every purchase and display JAR at counter.Output should give number of candies sold and updated number of candies in JAR. If input is more than number of candies in JAR,return “INVALID INPUT”. Given,
N=10, Where N is number of candies available, K<=5,Where K is number of minimum candies that must be inside JAR ever.

Example1: (N=10,K=<5) Input Value
3
Output Values:
Number of Candies Sold: 3 Number of Candies available:7

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N=10,k;
	cin>>k;
	if(k>0 && k<=5){
		cout<<"Number of Candies Sold:"<<k<<endl;
		cout<<"Number of Candies available:"<<(N-k)<<endl;
	}
	else{
		cout<<"INVALID INPUT"<<endl;
		cout<<"Number of Candies available:"<<N<<endl;
	}
	return 0;
}