#include <bits/stdc++.h>
using namespace std;
int a[10000000];
int main(){
	int t;
	cin>>t;
	while(t--){
      int n;
      cin>>n;
      for(int i=0;i<n;i++){
      	cin>>a[i];
      }
      int maxsofar=INT_MIN;
      int maxtillhere=0;
      for(int i=0;i<n;i++){
      	maxtillhere=maxtillhere+a[i];
        maxsofar=max(maxsofar,maxtillhere);
      	if(maxtillhere<0)
      		maxtillhere=0;
      	
      }
      cout<<maxsofar<<endl;
	}
}