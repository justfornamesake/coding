#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector <int> v;
	vector <int> v1;
	vector <int> ans;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		v.push_back(x);
	}
	for(int i=0;i<m;i++){
		int x;cin>>x;
		v1.push_back(x);
	}
	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;
	int i=0;
	int j=0;
	while(i<n && j<m){
		if(v[i]<v1[j]){
			i++;
		}
		else if (v[i]>v1[j]){
			j++;
		}
		else{
			ans.push_back(v[i]);
			i++;
			j++;
		}
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;

}