#include <bits/stdc++.h>
using namespace std;
int a[10000000];
int main(){
	int t;
	cin>>t;
	while(t--){
          int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
        if(i==n-1)
	     cout<<-1<<endl;
		else if(a[i+1]<a[i])
			cout<<a[i+1]<<" ";
		else
			cout<<-1<<" ";
	}
	   

	cout<<endl;
	}
	
}