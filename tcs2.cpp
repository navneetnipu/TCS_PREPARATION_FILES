#include<bits/stdc++.h>
using namespace std;
#define Samsung 10000
#define onida 7000
#define DLC 6000
int main(){
	int choice1;
	double MRP;
	string choice2,choice3;
	cout<<"enter youe choicfe number:"<<endl;
	cout<<"1.Samsung 10000"<<endl;
	cout<<"2.Onida 7000"<<endl;
	cout<<"3.DLC 6000"<<endl;
	cin>>choice1;
	switch(choice1){
		case 1:
			cout<<"EXCHANGE OFFER-YES OR NO:"<<endl;
			cin>>choice2;
			if(choice2=="YES"){
				cout<<"WORKING CONDITION-YES OR NO:"<<endl;
				cin>>choice3;
					if(choice3=="YES"){
						MRP=Samsung-(20*Samsung/100.0L);
						cout<<"MRP:"<<MRP<<endl;
					}
					else if(choice3=="NO"){
						MRP=Samsung-(2.0L*Samsung/100.0L);
						cout<<"MRP:"<<MRP<<endl;
					}
					else{
						cout<<"INVALID INPUT"<<endl;
					}
			}
			else if(choice2=="NO"){
				MRP=Samsung;
				cout<<"MRP:"<<MRP<<endl;
			}
			else{
				cout<<"INVALID INPUT"<<endl;
			}
			break;

		case 2:
			cout<<"EXCHANGE OFFER-YES OR NO:"<<endl;
			cin>>choice2;
			if(choice2=="YES"){
				cout<<"WORKING CONDITION-YES OR NO:"<<endl;
				cin>>choice3;
					if(choice3=="YES"){
						MRP=onida-(20*onida/100.0L);
						cout<<"MRP:"<<MRP<<endl;
					}
					else if(choice3=="NO"){
						MRP=onida-(2.0L*onida/100.0L);
						cout<<"MRP:"<<MRP<<endl;
					}
					else{
						cout<<"INVALID INPUT"<<endl;
					}
			}
			else if(choice2=="NO"){
				MRP=onida;
				cout<<"MRP:"<<MRP<<endl;
			}
			else{
				cout<<"INVALID INPUT"<<endl;
			}
			break;

		case 3:
			cout<<"EXCHANGE OFFER-YES OR NO:"<<endl;
			cin>>choice2;
			if(choice2=="YES"){
				cout<<"WORKING CONDITION-YES OR NO:"<<endl;
				cin>>choice3;
					if(choice3=="YES"){
						MRP=DLC-(20*DLC/100.0L);
						cout<<"MRP:"<<MRP<<endl;
					}
					else if(choice3=="NO"){
						MRP=DLC-(2.0L*DLC/100.0L);
						cout<<"MRP:"<<MRP<<endl;
					}
					else{
						cout<<"INVALID INPUT"<<endl;
					}
			}
			else if(choice2=="NO"){
				MRP=DLC;
				cout<<"MRP:"<<MRP<<endl;
			}
			else{
				cout<<"INVALID INPUT"<<endl;
			}
			break;

		default:
			cout<<"INVALID INPUT"<<endl;
	}
}