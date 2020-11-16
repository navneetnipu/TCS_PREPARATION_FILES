#include<bits/stdc++.h>
using namespace std;
int main(){
	string input,output;
	string arr[23]= {"Giant-Teddy-Bear", "Giraffe", "Cat",
"Mega-Bear", "Dog", "Lion", "Billy-Bear", "Besty-Bear",
"Monkey", "Bobby-Bear", "Bunny-Rabbit", "Benjamin-Bear", "Kung-Fu-Panda", "Brown-Bear", "Pink-Bear"
"Baby-Elephant", "Blue-Fish", "Hippo", "Cute-Pig",
"Pikachu", "Doremon", "Tortoise", "Cater-Pillar",
"Candy-Doll"};
	cin>>input;
	stringstream ss(input);
	int x=0,y;
	ss>> x;
	if(x==0){
		for(int i=0;i<23;i++){
			if(arr[i]==input){
				y=i;
			}
		}
		for(int i=y;i<22;i++){
			arr[i]=arr[i+1];
		}
		for(int i=0;i<22;i++){
			cout<<i+1 << "." << arr[i]<<','<<endl;
		}
	}
	else if(x>0){
		output=arr[x-1];
		y=x-1;
		for(int i=y;i<22;i++){
			arr[i]=arr[i+1];
		}
		for(int i=0;i<22;i++){
			cout<<i+1 << "." << arr[i]<<','<<endl;;
		}
	}
	else{
		cout<<"wrong input"<<endl;
	}

}