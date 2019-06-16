#include <bits/stdc++.h>
using namespace std;
int a[1000000];
bool flag=false;
int main(){
	int t;
	cin>>t;
	while(t--){
		flag=false;
      int n,val;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>val;
	sort(a,a+n);// first sort the array so it becomes x0,x1 ,x2,x3,x4 where x0<x1<x2<x3<x4
	// cout<<"sorted"<<endl;
	//  for(int i=0;i<n;i++){
	//  	cout<<a[i]<<"  ";
	//  }
	//  cout<<endl;
	int l,r;
	int sum=0;
	for(int i=0;i<n-3;i++){
		for(int j=i+1;j<n-2;j++){
			  l=j+1;
			  r=n-1;// the last index element
			 while(l<r){ // two pointer algorithm
			 	 sum=a[i]+a[j]+a[l]+a[r];
                  
			 	if(sum==val){
			 		flag=true;
			 		// cout<<"i"<<i<<endl;
			 		// cout<<"j"<<j<<endl;
			 		// cout<<"l"<<l<<endl;
			 		// cout<<"r"<<r<<endl;


			 		// cout<<"sum"<<sum<<"val"<<val<<endl;
			 		// cout<<a[i]<<" "<<a[j]<<" "<<a[l]<<" "<<a[r]<<endl;
			 		l++;
			 		r--;
			 	}
			 	else if(sum<val){
			 		// you simply need bigger numbers so you need to move right ward 
			 		l++;
			 	}
			 	else{
			 		r--;
			 	}
			 }
		}
     	}
     	if(flag==true)
     		cout<<1<<endl;
     	else
     		cout<<0<<endl;
	}
}