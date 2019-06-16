#include <bits/stdc++.h>
using namespace std;
int remove ( vector <int> v,int val){
	int i=0;
	int j=0;
	while(i<v.size()){
		if(v[i]!=val){
			v[j]=v[i];
			j++;
		}
		i++;
	}
	return j;
}
int main(){
	int n;
	cin>>n;
	vector <int> v;
	for(int i=0;i<n;i++){
       int x;cin>>x;
       v.push_back(x);
	}
	 int ans=remove(v,1);
	 cout<<ans<<endl;

}