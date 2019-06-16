#include <bits/stdc++.h>
using namespace std;
int a[10000000];
bool flag;
int main(){
	int t;
	cin>>t;
	while(t--){
		flag=false;
		int n,sum;
		cin>>n>>sum;

		for(int i=0;i<n;i++)
			cin>>a[i];

        int cur_sum=a[0];
        int start=0;

        for(int i=1;i<=n;i++){
        	while(cur_sum>sum && start<i-1){
        		cur_sum=cur_sum-a[start];
        		start++;
        	}
        	if(cur_sum==sum){
        		flag=true;
        		cout<<start+1<<" "<<i<<endl;
        		break;
        	}
        	if(i<n){
        		cur_sum+=a[i];


        	}

       }
       if(!flag)
       	cout<<-1<<endl;

   }
}