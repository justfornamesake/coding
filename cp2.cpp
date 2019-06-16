#include <bits/stdc++.h>
using namespace std;
int a[1000000];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int right[1000000];
        int left[1000000];
		for(int i=0;i<1000000;i++){
			right[i]=-10000;
			left[i]=-10000;
		}
		right[n-1]=a[n-1];
		left[0]=a[0];
		for(int i=n-2;i>=0;i--){
			if(i+1!=n){
               right[i]=max(right[i+1],a[i]);
			}
		};
		for(int i=1;i<n;i++){
		   left[i]=max(left[i-1],a[i]);
		};
		
        for(int i=0;i<n;i++){
        	if(a[i]>right[i+1] && i!=n-1){
        		cout<<a[i]<<" ";
        	}
  
        }
        cout<<a[n-1]<<endl;
         bool flag=false;
        if(a[0]>right[1]){
        	cout<<a[0]<<" ";
        	flag=true;
        }
       
        for(int i=1;i<n;i++){
        	if(a[i]>right[i+1] && a[i]>left[i-1]){
        		flag=true;
        		cout<<a[i]<<" ";
        		
        	}
        }
        if(flag==true)
        cout<<endl;
    
        if(!flag){
        	cout<<-1<<endl;
        }


	}
}