#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count_even=0,count_odd=1;
	cin>>n;
	int fibonachi[n+1];
	if(n>5  && n<=20){
		fibonachi[0]=0;
		fibonachi[1]=1;
		for(int i=2;i<=n;i++){
			fibonachi[i]=fibonachi[i-1]+fibonachi[i-2];
			if(fibonachi[i]%2==0){
				count_even+=1;
			}
			else{
				count_odd+=1;
			}
		}
		cout<<count_even<<endl;
		cout<<count_odd<<endl;

	}
	else{
		cout<<"INVALID INPUT"<<endl;
	}
	
	return 0;
}