#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int b[1000000];
int binary_search(int a[],int b[],int n){
    int left=0;
    int right=n-1;
    int ans=n;
    while(left<=right){
    	int mid=(left+right)/2;
    	if(a[mid]==b[mid]){
    		left=mid+1;
    	}
    	else{
             right=mid-1;
             ans=mid;
    	}

    }
    return ans;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++)
			cin>>b[i];
        int ans=binary_search(a,b,n);

        cout<<ans<<endl;

	}
}