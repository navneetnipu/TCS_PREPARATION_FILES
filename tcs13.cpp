/*
Q1. There is a bucket of water capacity of X litres, which is supposed to fill with a mug of Y millilitres water capacity. Say for example X=100 and Y=10 then, the bucket will get full of a minimum of 8 mugs (>80% and less than 100%>). Bucket filling is to be stopped once more than 80% of bucket capacity is filled. The amount of water taken at a time in a mug is not fixed as it can be any value less than or equal to y. Notify to stop once the bucket is full. That is more than 80% of the capacity of the bucket and the count number of mugs poured into the bucket. Note that Bucket capacity will always be greater than Mug’s capacity.
Example 1:
INPUT Values
100 // Enter bucket capacity in litres
as this
20 //Enter Mug capacity in litres as
this
//Enter Amount of water in MUG one after other as below
20
20
20
20
20
OUTPUT Values
BUCKET FULL!
NUMBER OF MUGS: 4
Note:
Order of inputs should be the same as shown in the above example. Do not use Input Prompts(Directly accept input values in order as above). Output should match with the format given above.
If the amount of water entered by the user is less than zero or greater than Mug’s Capacity display “INVALID INPUT” and quit. If the capacity of Mug entered is greater than the capacity of Bucket then quit with the error message “INVALID INPUT”.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	float Bucket_capacity,mug_capacity;
	cin>>Bucket_capacity>>mug_capacity;
	if(Bucket_capacity>=mug_capacity && mug_capacity!=0){
		float water_filled=0;
		int num_mugs=0;
		do{
			water_filled+=mug_capacity;
			num_mugs+=1;

		}while(water_filled<=(0.8*Bucket_capacity));
		cout<<"BUCKET FULL!\n"<<"NUMBER OF MUGS:"<<num_mugs<<endl;
	}
	else{
		cout<<"INVALID INPUT"<<endl;
	}
	return 0;
}