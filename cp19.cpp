#include <bits/stdc++.h>
using namespace std;
int fun(int n){
	int val=0;
	while(n>0){
		int r=n%10;
		if(r==0)
			val=val*10+5;
		else
			val=val*10+r;
		n=n/10;
	}
	return val;
}
int main(){
	int n;
	cin>>n;
	int ans=fun(n);
	cout<<ans<<endl;
}