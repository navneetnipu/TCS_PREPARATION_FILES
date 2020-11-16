/*
Chain Marketing Sales Organization has a scheme for income generation through which its members generate income for themselves. The scheme is such that suppose A joins the scheme and makes Rand V to join this scheme then A is Parent Member of R and V who are child Members. When any member joins the scheme then the parent gets a total commission of 10% from each of its child members.
Child members receive commission of 5% respectively.
If a Parent member does not have any member joined under him, then he/she gets commission of 5%.
Take the Name of the Members Joining the Scheme as input.
Display how many members joined the scheme including parent members, Calculate the Total commission gained by each member in the scheme. The fixed amount for joining the scheme is Rs.5000 on which commission will be generated.
Scherne Amount=5000
Example 1: When there are more than one child members
Input: (Do not give Input Prompts. Accept values as follows.)
Amit //Enter Parent Member Name as this
Y //Enter Y if Parent Member have child members otherwise enter N
Rajesh, Virat //Enter Name of child members of Amit in comma separated
Output: (Final output must be in format given below.)
TOTAL MEMBERS: 3
COMMISSION DETAILS
Amit: 1000 INR
Rajesh: 250 INR
Virat: 250INR
Example 2: When there is only one child member in the hierarchy
Input:
Amit
Y
Rajesh
Output:
TOTAL MEMBERS: 2
COMMISSION DETAILS
Amit: 500 INR
Rajesh: 250 INR
*/
#include<bits/stdc++.h>
using namespace std;
#define amount 5000
#define parent_comm 250
#define child_comm 250
int main(){
	string parent,child,str;
	char c,x;
	vector <string> childs;
	cin>>parent;
	cin>>x;
	if(x=='y'){
		cin>>str;
		stringstream ss(str);
		while(ss.good()){
			getline(ss,child,',');
			childs.push_back(child);
		}
		cout<<"TOTAL MEMBERS:"<<1+childs.size()<<endl;
		cout<<"COMMISSION DETAILS"<<endl;
		cout<<parent<<":"<<parent_comm*childs.size()<<" INR"<<endl;
		for(int i=0;i<childs.size();i++){
			cout<<childs[i]<<":"<<child_comm<<" INR"<<endl;
		}
	}
	else if(x=='n'){
		cout<<"TOTAL MEMBERS:1"<<"\n"<<"COMMISSION DETAILS"<<endl;
		cout<<parent<<":"<<parent_comm<<" INR"<<endl;
	}
	else{
		cout<<"INVALID INPUT"<<endl;
	}
}