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

		sort(a,a+n);
		int ans=max(a[0]*a[1]*a[n-1],a[n-3]*a[n-2]*a[n-1]);
		cout<<ans<<endl;
	}
}