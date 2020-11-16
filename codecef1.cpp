#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >>T;
	while(T--){
	    int N;
	    cin>>N;
	    int arr[N]={0};
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr + N);
	    int burner1=0,burner2=0,k=N-1;
	    int temp=0;
	    if(N>0){
	     while(k-1>=0){
            if(temp==0){
            	burner1+=arr[k];
            	burner2+=arr[k-1];
            	temp=1;
            	k-=2;
            }
            else{
            	burner2+=arr[k];
            	burner1+=arr[k-1];
            	temp=0;
            	k-=2;
            }
           }
        }
        if(N%2==0){
        	cout<<max(burner1,burner2)<<endl;
        }
        else{
        	int Max,Min;
        	Max=max(burner1,burner2);
        	Min=min(burner1,burner2);
        	Min+=arr[0];
        	cout<<max(Max,Min)<<endl;
	    }
	}
	return 0;
}
