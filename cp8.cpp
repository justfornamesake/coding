#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int binarysearch(int a[],int val,int n){
	int low=0;
	int high=n-1;
	int mid;
	int store=-1;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==val && mid>0){
			store=mid;
			high=mid-1;
		}
		else if (a[mid]<val){
			low=mid+1;

		}
		else{
			high=mid-1;
		}
	}
	return store;
}
int binarysearch1(int a[],int target,int n){
	int low=0;
	int high=n-1;
	int mid;
	int store=-1;
	while(low<=high){
		mid=(low+high)/2;
        if(a[mid]==target && mid<n){
        	store=mid;
        	low=mid+1;
        }
        else if(a[mid]<target){
           low=mid+1;
        }
        else{
        	high=mid-1;
        }

	}
	//cout<<"store "<<store <<endl; 
	return store;
	
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int first=binarysearch(a,x,n);
        int last=binarysearch1(a,x,n);
        if(first==-1)
        	cout<<-1<<endl;
        else{
            if(last==-1){
            	cout<<first<<" "<<first<<endl;
            }
            else
            	cout<<first<<" "<<last<<endl;
        }
		
	}
}