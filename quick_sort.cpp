#include<bits/stdc++.h>
using namespace std;
/*
do not use vector as input
1-chose pivot
2-elements less than pivot are to the left of pivot
3-elements more than pivot are to the right of pivot
4-quicksort left of pivot
5-quicksort right of pivot
6-recursive function use
*/
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int input[],int left,int right){
	int pivot=input[right];
	int j=left-1;
	for(int i=left;i<=right-1;i++){
		if(input[i]<pivot){
			j++;
			swap(&input[j],&input[i]);
		}
	}
	swap(&input[j+1] , &input[right]);
	return (j+1);
}
void quick_sort(int input[],int left,int right){
	if(left<right){
		int pivot_index=partition(input,left,right);
		quick_sort(input,left,pivot_index-1);
		quick_sort(input,pivot_index+1,right);
	}
}
void printArray(int input[] , int size)  
{  
    int i;  
    for (i = 0; i < size; i++) 
        cout <<input[i] << " ";  
    cout << endl;  
}  
int main()
{
	vector<int> input;
	int n;
	while(cin>>n){
		input.push_back(n);
	}
	int i=input.size()-1;
	int arr[input.size()];
	for(int k=0;k<input.size();k++){
		arr[k]=input[k];
	}
	quick_sort(arr,0,i);
	printArray(arr,i+1);
	return 0;
}