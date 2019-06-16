#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000000];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	priority_queue <int ,vector <int> ,greater <int> >pq(a,a+n);
	int res=0;
	while(pq.size()>1){
		int first=pq.top();
		pq.pop();
		int second=pq.top();
		pq.pop();
		res+=first+second;
		pq.push(res);
	}
	cout<<res<<endl;

}
