/*
Q1. One private Car Parking service CPS Offers service for cars to be parked in their area for specific duration. CPS don't allow car drivers to enter and choose location rather they hand over the keys and cars at the gate from where the staff takes cars into the parking zone where each car is parked at the next available position of last car parked and returns the key with CPS Tag to the Car Driver. If Parking slots are full, extra cars cannot be parked.
CPS maintains the record for each car placed at a particular slot with car plate number, so that when Owner comes to take his/her Car it will be easy to find the exact position of where the car has parked. For example, list of Car Plate Numbers can be as per Car's position in the CPS Parking area.
Write code for 2 functionalities as
 
1.	The Park(String plateNumber) function which takes a plateNumber of newly entered Car and allocates a position in the list. That is adding Car to the parking area to the next position of the last Car parked.
2.	The Search(String plateNumber) function should return
The Car Position as output for the given input is Car Plate Number.
Name Plate String can have minimum 6 and maximum 12 numbers of characters. Ignore decorating or separator characters.(Data Structure used to hold CPS car parking data must be initialized with following Car numbers for better output.) CPS = [MH04CC2,MH04C2820, MHO4BB3232, MH04CC2113, MHO4CC2878, MHO4BB8, MH04CC2888, MH04CC1313, MH04CC2222, MH04C1201, MH04CC555, MH04C6565, MHO4A7]
Input should be as follows:
1
MHCC2222
Note: 1 should be entered for car parking and 2 should be entered for car searching along with car plate number.
Output must be in format as follows:
●	"CAR PARKED AT POSITION:<number>", if option 1 is selected with valid car plate number as input
●	CAR POSITION:<number>", if option 2 is selected and valid car number is entered which is already present in CPS
●	"CAR DOES NOT EXISTS", if option 2 is selected and valid car number is entered which is not present in CPS "INVALID INPUT", if option entered is other than the value 1 or 2 or if invalid car number is entered
Test case 1:
Case 1: Example INPUT VALUE: 2
MH04CC278 OUTPUT VALUE: CAR POSITION: 5
vector <string> name{""};
name.push_back("");
*/
#include<bits/stdc++.h>
using namespace std;
	vector <string> cps {"MH04CC2","MH04C2820","MHO4BB3232", "MH04CC2113", "MHO4CC2878", "MHO4BB8", "MH04CC2888", "MH04CC1313", "MH04CC2222", "MH04C1201", "MH04CC555", "MH04C6565", "MHO4A7"};
int search(string plateNumber){
	int carPosition=-1;
	for(int i =0;i<cps.size();i++){
		if(plateNumber==cps[i]){
			carPosition=i;
		}
	}
	return carPosition;
}
void park(string plateNumber){
	if(search(plateNumber)==-1){
		cps.push_back(plateNumber);
		cout<<cps.size()-1<<endl;
	}
	else{
		cout<<"CAR ALREADY IN PARKING"<<endl;
	}
}
int main(){
	string plateNumber;
	int k;
	cin>>k;
	cin>>plateNumber;
	if(plateNumber.size()>=6 && plateNumber.size()<=12){
		switch(k){
			case 1:
				park(plateNumber);
				break;
			case 2:{

				int r=search(plateNumber);
				if(r==-1){
					cout<<"CAR NOT FOUND"<<endl;
				}
				else{
					cout<<r<<endl;
				}
			}
			break;
			default:
				cout<<"INVALID INPUT"<<endl;
		}
	}
	else{
		cout<<"INVALID CAR PLATE NUMBER"<<endl;
	}

	return 0;
}