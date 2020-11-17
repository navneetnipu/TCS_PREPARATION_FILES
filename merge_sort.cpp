#include<bits/stdc++.h>
using namespace std;
/*
nlogn sorting time complexity
merge sort-
1-get m value
2-divide the aray by m by calling mergesort 2 times
3-then merge the arrays
three functions are required-
1-merge
2-mergesort
3-print the array
*/
void merge(int arr[],int left,int m,int right){
	int n1=m-left+1;
	int n2=right-m;
	int LEFT[n1],RIGHT[n2];
	int k=left;
	for(int i=0;i<n1;i++){
		LEFT[i]=arr[left+i];
	}
	for(int j=0;j<n2;j++){
		RIGHT[j]=arr[m+1+j];
	}
	int i=0,j=0;
	while(i<n1 && j<n2){
		if(LEFT[i]<=RIGHT[j]){
			arr[k]=LEFT[i];
			i++;
		}
		else{
			arr[k]=RIGHT[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k]=LEFT[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=RIGHT[j];
		j++;
		k++;
	}
}
void merge_sort(int arr[],int left,int right){
	if(left<right){
		int m=left+(right- left)/2;
		merge_sort(arr,left,m);
		merge_sort(arr,m+1,right);
		merge(arr,left,m,right);
	}
}
void print_array(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}
int main(){
	vector<int> v;
	int n;
	while(cin>>n){
		v.push_back(n);
	}
	int arr[v.size()];
	for(int i=0;i<v.size();i++){
		arr[i]=v[i];
	}
	merge_sort(arr,0,v.size()-1);
	print_array(arr,v.size());
	return 0;
}