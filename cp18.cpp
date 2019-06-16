#include <bits/stdc++.h>
using namespace std;
int a[10000000];
int binary_search(int a[],int target,int n){
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		cout<<"mid is "<<mid<<endl;
		if(a[mid]==target)
			return mid;
		if(a[mid]<target)
			low=mid+1;
		else
			high=mid-1;
	}
	return low;
}
int main(){
    int n;cin>>n;
    int target;cin>>target;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int ans=binary_search(a,target,n);
    cout<<ans<<endl;
}