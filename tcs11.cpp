/*
Q1. There are a total number of Monkeys sitting on the branches of a huge Tree. As travelers offer Bananas and Peanuts, the Monkeys jump down the Tree. If every Monkey can eat k Bananas and j Peanuts. If Total m number of Bananas and p number of Peanuts offered by Travelers, calculate how many Monkeys remain on the Tree after some of them jumped down to eat.
At a time, one Monkey gets down and finishes eating and goes to the other side of the road. The Monkey who climbed down does not climb up again after eating until the other Monkeys finish eating. Monkeys can either eat k Bananas or j Peanuts. If for the last Monkey there are less than k Bananas left on the ground or less than j Peanuts left on the ground, only that Monkey can eat Bananas (<k) along with the Peanuts (<j).
Write the code to take inputs as n, m, p, k, j and return the number of Monkeys left on the Tree.
Where, n = Total number of Monkeys
k = Number of eatable Bananas by a single Monkey (Monkey that jumped down last may get less than k Bananas)
j = Number of eatable Peanuts by a single Monkey (Monkey that jumped down last may get less than Bananas)
m = Total number of Bananas
p = Total number of Peanuts
Remember that the Monkeys always eat Bananas and Peanuts, so there is no possibility of k and j having a value zero.
Example 1:
Input Values
20
2
3
12
12
Output Values
Number of Monkeys left on the Tree: 10
Note: Kindly follow the order of inputs as n, k, j, m, p as given in above example. And output must include the same format as in above example(Number of Monkeys left on the Tree:<Integer>)
For any wrong input display INVALID INPUT
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,p,k,j,count1=0,count2=0,remaining,remainder=0;
	cin>>n;
	cin>>k;
	cin>>j;
	cin>>m;
	cin>>p;
	if(n>0 && m>0 && p>0 && k>0 && j>0){
		count1=m/k;
		remainder=m%k;
		if(remainder!=0){
			count1+=1;
		}
		count2=p/j;
		remainder=p%j;
		if(remainder!=0){
			count2+=1;
		}
		cout<<"Number of Monkeys left on the Tree:"<<n-(count1+count2)<<endl;
	}
	else{
		cout<<"INVALID INPUT"<<endl;
	}
}