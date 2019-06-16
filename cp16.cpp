#include <bits/stdc++.h>
using namespace std;
int a[10000000];
int b[10000000];
int main(){
   int t;
   cin>>t;
   while(t--){
   	int n;
   	cin>>n;
   	for(int i=0;i<n;i++)
   		cin>>a[i];
   	for(int i=0;i<n;i++)
   		cin>>b[i];
   	sort(a,a+n);
   	sort(b,b+n);
   	bool flag=false;
   	for(int i=0;i<n;i++){
   		if(a[i]>b[i])
   			flag=true;
   	}
   	if(flag)
   		cout<<"NO"<<endl;
   	else
   		cout<<"YES"<<endl;

   }	
}