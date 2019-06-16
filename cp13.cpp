#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int transition(int a[],int n){
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]==0){
			low=mid+1;
		}
		else{
			if(a[mid-1]==0){
				return mid;
			}
			else
				high=mid-1;
		}
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		int ans=transition(a,n);
		cout<<ans<<endl;


	}
}