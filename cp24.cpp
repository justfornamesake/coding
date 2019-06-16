#include <bits/stdc++.h>
using namespace std;
int a[10000000];
int binary_search(int a[],int key,int n){
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]==key)
			return mid;
		if(a[low]<a[mid]){
             if(a[low]<=key && key <a[mid]){
               high=mid-1;
		    }
		    else
		    	low=mid+1;
		}
		else{
			if(a[mid]<key && key <=a[high]){
				low=mid+1;
			}
			else
				high=mid-1;
		}
		
	}
	return -1;
}
int main(){
	int t;cin>>t;
	while(t--){
    int n;
	int key;
	cin>>n;
	for(int i=0;i<n;i++){
       cin>>a[i];
	}
	cin>>key;

	int ans=binary_search(a,key,n);
	cout<<ans<<endl;
	}
	
}