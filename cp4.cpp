#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int a[1000000];
int leftsum [1000000];
int rightsum[1000000];
bool flag;
int main(){
	int t;
	cin>>t;
	while(t--){
       int n;
       cin>>n;

       for(int i=0;i<n;i++)
       	cin>>a[i];

        for(int i=0;i<n;i++){
          leftsum[i]=rightsum[i]=0;
        }

        flag=false;
        leftsum[0]=a[0];
        for(int i=1;i<n;i++){
        	leftsum[i]=leftsum[i-1]+a[i];
        }
        rightsum[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
        	rightsum[i]=rightsum[i+1]+a[i];
        }
        for(int i=1;i<n;i++){
        	if(i+1!=n){
              if(leftsum[i-1]==rightsum[i+1]){
              flag=true;
              cout<<i<<endl;
           }
        }
       }
        if(!flag){
        	cout<<-1<<endl;
        }

	}
}