#include <bits/stdc++.h>
using namespace std;
int a[10000000];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		for(int i=0;i<n;i++)
			cin>>a[i];
		int cur_sum=0;
		int start=0;
		for(int i=0;i<n;i++){
			while(cur_sum>s && start <i-1){
				 cur_sum=cur_sum-a[i];
				 start++;
			}
			if (cur_sum==s){
				cout<<start<<" "<<i-1<<endl;
			}
			if(i<n){
				cur_sum+=a[i];
			}
		}
		}


	}
