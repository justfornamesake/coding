#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		int count=1;
		int maxheight=a[0];
		for(int i=1;i<n;i++){
            if(a[i]>maxheight){
            	maxheight=max(a[i],maxheight);
            	count++;
            }
		}
		cout<<count<<endl;

	}
}