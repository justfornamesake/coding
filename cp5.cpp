#include <bits/stdc++.h>
using namespace std;
int a[1000000];
bool flag=false;
int main(){
	int t;
	cin>>t;
	while(t--){
        flag=false;
		int n,k;
		cin>>k>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];

        set <int> s;
        s.clear();
        for(int i=0;i<n;i++){
        	if(s.find(a[i])!=s.end()){
        		cout<<"True"<<endl;
        		flag=true;
        		break;
        	}
        	s.insert(a[i]);
        	if(i>=k){
        		s.erase(a[i-k]);
             }

        }
        if(!flag)
        	cout<<"False"<<endl;
	}
}