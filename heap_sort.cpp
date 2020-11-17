#include<bits/stdc++.h>
using namespace std;
/*

*/void swap(int * a,int * b){
	int t=*a;
	*a=*b;
	*b=t;
}

void heapify(int arr[],int size,int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<size && arr[left]> arr[largest]){
		largest=left;
	}
	if(right < size && arr[right]>arr[largest] 	){
		largest=right;
	}
	if(largest!=i){
		swap(&arr[i],&arr[largest]);
		heapify(arr,size,largest);
	}
}
void heapsort(int arr[],int size){
	for(int i=size-1;i>=0;i--){
		heapify(arr,size,i);
	}
	for(int i=size-1;i>0;i--){
		swap(&arr[0],&arr[i]);
		heapify(arr,i,0);
	}
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main(){
	vector<int> v;
	int num;
	while(cin>>num){
		v.push_back(num);
	}
	int arr[v.size()];
	for(int i=0;i<v.size();i++){
		arr[i]=v[i];
	}
	heapsort(arr,v.size());
	printArray(arr,v.size());
	return 0;
}