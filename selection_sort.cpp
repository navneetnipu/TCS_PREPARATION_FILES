#include<bits/stdc++.h>
using namespace std;
/*
1-select minimum element from given array(select)
2-swap ith element with minimum element
O(n^2)
*/
void swap(int * a,int *b){
	int t=*b;
	*b=*a;
	*a=t;
}
void selection_sort(int arr[],int size){
	int i,j,min_ind;
	for(i=0;i<size;i++){
		min_ind=i;
		for(j=i;j<size;j++){
			if(arr[j]<arr[min_ind]){
				min_ind=j;
			}
		}
		swap(&arr[min_ind],&arr[i]);
	}
}
void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
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
	selection_sort(arr,input.size());
	printArray(arr,input.size());
	return 0;
}