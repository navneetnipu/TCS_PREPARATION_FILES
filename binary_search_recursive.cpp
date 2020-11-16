#include<bits/stdc++.h>
using namespace std;
/*
because low+right exceeds the max int storage value if right is 2^30 -1;
 int mid = low + ((high - low) / 2);
 int mid = (low + high) >>> 1;
 mid = ((unsigned int)low + (unsigned int)high)) >> 1;
*/
/*
// C++ program to implement recursive Binary Search 
#include <bits/stdc++.h> 
using namespace std; 

// A recursive binary search function. It returns 
// location of x in given array arr[l..r] is present, 
// otherwise -1 
int binarySearch(int arr[], int l, int r, int x) 
{ 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 

		// If the element is present at the middle 
		// itself 
		if (arr[mid] == x) 
			return mid; 

		// If element is smaller than mid, then 
		// it can only be present in left subarray 
		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x); 

		// Else the element can only be present 
		// in right subarray 
		return binarySearch(arr, mid + 1, r, x); 
	} 

	// We reach here when element is not 
	// present in array 
	return -1; 
} 

int main(void) 
{ 
	int arr[] = { 2, 3, 4, 10, 40 }; 
	int x = 10; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int result = binarySearch(arr, 0, n - 1, x); 
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result; 
	return 0; 
} 

*/
void binary_search(vector<int> sorted_vector,int left,int right,int target){

	if(left!=right){
		if(sorted_vector[(left+right)/2]==target){
			cout<<"INDEX OF THE TARGET ARRAY:"<<(left+right)/2<<endl;
		}
		else if(sorted_vector[(left+right)/2]<target){
			left=(left+right)/2;
			binary_search(sorted_vector,left,right,target);
		}
		else if(sorted_vector[(left+right)/2]>target){
			right=(left+right)/2;
			binary_search(sorted_vector,left,right,target);
		}
	}
	else{
		if(sorted_vector[left]==target){
			cout<<"INDEX OF THE TARGET ARRAY:"<<left<<endl; 
		}
		else{
			cout<<"TARGET NOT FOUND!"<<endl;
		}
	}

}
int main()
{
	vector<int> input;
	int num,target,i=0;
	int left,right;
	cout<<"ENTER THE ELEMENT TO BE SEARCHED:"<<endl;
	cin>>target;
	cout<<"ENTER THE ELEMENT OF SORTED ARRAY:"<<endl;
	while(cin>>num){
		input.push_back(num);
	}
	cout<<endl;
	left=0;
	right=input.size()-1;
	binary_search(input,left,right,target);
	return 0;
}