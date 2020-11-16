/*Q1. We want to estimate the cost of painting a property. Interior wall painting cost is Rs.18 per square feet and exterior wall painting cost is Rs.12 per square feet. Take input as
1. Number of Interior walls
2. Number of Exterior walls
3. Surface Area of each interior wall in units of square feet
4. Surface Area of each exterior wall in units of square feet
If a user enters zero as the number of walls then skip Surface area values as User may don't want to paint that wall. Calculate and display the total cost of painting the property.
Example 1:
6
3
12.3
15.2
12.3
15.2
12.3
15.2
10.10
10.10
10.00
Total estimated Cost:1847.4 INR
Note: Follow in input and output format as given in above example.

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int interior_num,exterior_num;
	float interior_area=0.0,exterior_area=0.0,cost,total_int_area=0.0,total_ext_area=0.0;
	cin>>interior_num;
	cin>>exterior_num;
	if(interior_num>0){
		for(int i=1;i<=interior_num;i++){
		cin>>interior_area;
		total_int_area+=interior_area;
		}
	}
	if(exterior_num>0){
		for(int i=1;i<=exterior_num;i++){
		cin>>exterior_area;
		total_int_area+=exterior_area;
		
		}
	}
	cost=(18*total_int_area)+(12*total_ext_area);
	cout<<"total estimated cost:"<<cost<<endl;
	return 0;
}