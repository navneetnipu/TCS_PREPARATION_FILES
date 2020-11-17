#include<bits/stdc++.h>
using namespace std;
/*
	key-insert-sort
	1-take key
	2-compare and insert 
	3-insert key
*/
void insertion_sort(int input[],int size){
	int i,j,key;
for(int i=1;i<size;i++){
	key=input[i];
	j=i-1;
	while(j>=0 && input[j]>key){
		input[j+1]=input[j];
		j=j-1;
	}
	input[j+1]=key;
}
}
void printFunction(int input[],int size){
	for(int i=0;i<size;i++){
		cout<<input[i]<<"  ";
	}
	cout<<endl;
}
int main(){
	vector<int> input;
	int n;
	while(cin>>n){
		input.push_back(n);
	}
	int arr[input.size()];
	for(int i=0;i<input.size();i++){
		arr[i]=input[i];
	}
	insertion_sort(arr,input.size());
	printFunction(arr,input.size());
	return 0;
}