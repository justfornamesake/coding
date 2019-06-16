#include <bits/stdc++.h>
using namespace std;
int fun(int n){
	int dp[n+1];
	if(n<3)
		return n;
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=n;i++){
		dp[i]=(dp[i-1]+dp[i-2])%1000000007;
	}
	return dp[n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
    int n;
	cin>>n;
	int ans=fun(n);
	cout<<ans<<endl;
	}
	
}