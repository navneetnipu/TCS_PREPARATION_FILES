#include <bits/stdc++.h>
using namespace std;
/*
3
3
2 2 2
3
1 2 3
4
2 3 4 5

*/
int main() {
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int arr[N]={0};
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        sort(arr,arr+N);
        int b1=0,b2=0,ans=0,k=N-1;
        while(k>=0){
            //cout<<"WHILE K>=0"<<"::"<<k<<endl;
            if(k>=1){
                //cout<<"IF K>=1 "<<":"<<k<<endl;
                b1=arr[k--];
                ans+=b1;
                b1-=arr[k--];
                while(b1>0 && k>=0){
                    //cout<<"WHILE b1>0: "<< ":k:"<<k<<endl;
                    //cout<<" b1 -= arr[k]:"<<b1<<"-"<<arr[k]<<endl;
                    b1-=arr[k--];
                    if(b1<0 && k>=0){
                        //cout<<"IF b1< 0:"<<b1<<endl;
                        b1=-1*b1;
                        ans+=b1;
                    }
                }
                
            }else{
                //cout<<"ELSE  ans+=(arr[k]-b1"<<arr[k]<<"-"<<b1<<endl;
                ans+=(arr[k--]-b1);
            }
        }
            cout<<ans<<endl;
    }
  return 0;
}