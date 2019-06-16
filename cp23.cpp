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
	int j=0;
	int i=0;
    while(i<n){
    	if(a[i]!=0){
    		a[j]=a[i];
    		j++;
    	}
    	i++;
    }
    j=n-j;
    i=n-1;
    int k=0;
    while(k<j){
    	a[i]=0;
    	k++;
    	i--;
    }
    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
    }
    cout<<endl;

	}
	

}