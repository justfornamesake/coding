#include <bits/stdc++.h>
using namespace std;
int n;
int a[100000];
int lis[1000000];
int lis(int a[]){
   for(int i=0;i<n;i++)
   	lis[i]=1;
   for(int i=1;i<n;i++){
   	 for(int j=0;j<i;j++){
   	 	if(a[i]>a[j] && lis[i]<lis[j]+1)
   	 		lis[i]=lis[j]+1;
   	 }
   }
   int ans=-1000000;
   for(int i=0;i<n;i++)
   	ans=max(ans,lis[i]);
   return ans;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans=lis(a);
	cout<<ans<<endl;
}