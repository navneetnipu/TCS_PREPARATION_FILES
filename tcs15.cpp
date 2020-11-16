/*
Q1. FULLY AUTOMATIC VENDING MACHINE dispenses your cuppa on just the press of button. A vending machine can serve range of products as follows:
Coffee
1. Espresso Coffee
2. Cappuccino Coffee
3. Latte Coffee
Tea
1. Plain Tea
2. Assam Tea
3. Ginger Tea
4. Cardamom Tea
5. Masala Tea
6. Lemon Tea
7. Green Tea
8. Organic Darjeeling Tea
Soups
1. Hot and Sour Soup
2. Veg Corn Soup
3. Tomato Soup
4. Spicy Tomato Soup
Beverages
1. Hot Chocolate Drink
2. Badam Drink
3. Badam-Pista Drink
Write a program to take input for main menu & sub menu and display the name of sub menu selected in following format (enter the first letter to select main menu):
Welcome to CCD
Enjoy your <name of sub menu>
Example 1:
Input
c
1
Output
Welcome to CCD!
Enjoy your Espresso Coffee!
Example 2:
Input
TCS NQT 2020 | 26th Oct 8 am to 11 am Slot Analysis
t
9
Output
INVALID OPTION!
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	string c[3]={"Espresso Coffee","Cappuccino Coffee","Latte Coffee"};
	string t[8]={"Plain Tea", "Assam Tea", "Ginger Tea", "Cardamom Tea","Masala Tea", "Lemon Tea","Green Tea","Organic Darjeeling Tea"};
	string s[4]={"Hot and Sour Soup","Veg Corn Soup","Tomato Soup","Spicy Tomato Soup"};
	string b[3]={"Hot Chocolate Drink","Badam Drink","Badam-Pista Drink"};
	char menu;
	int sub_menu;
	cin>>menu;
	cin>>sub_menu;
	if(menu=='c'&& sub_menu>0 && sub_menu<=3 ){
		cout<<"Welcome to CCD!\n"<<"Enjoy your "<<c[sub_menu-1]<<"!"<<endl;
	}
	else if(menu=='t' && sub_menu>0 && sub_menu<=8){
		cout<<"Welcome to CCD!\n"<<"Enjoy your "<<t[sub_menu-1]<<"!"<<endl;
	}
	else if(menu=='s' && sub_menu>0 && sub_menu<=4){
		cout<<"Welcome to CCD!\n"<<"Enjoy your "<<s[sub_menu-1]<<"!"<<endl;
	}
	else if(menu=='b' && sub_menu>0 && sub_menu<=3){
		cout<<"Welcome to CCD!\n"<<"Enjoy your "<<b[sub_menu-1]<<"!"<<endl;
	}
	else{
		cout<<"INVALID OPTION!"<<endl;
	}
	return 0;
}