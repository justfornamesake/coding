// #include <bits/stdc++.h>
// using namespace std;
// int n;
// int fun(int a[]){
// 	int jumps[n+1];
// 	if(a[0]==0 || n==0)
// 		return INT_MAX;
// 	jumps[0]=0;
// 	for(int i=1;i<n;i++){
// 		jumps[i]=INT_MAX;
// 		for(int j=0;j<i;j++){
//            if(a[j]+j>a[i] && jumps[j]!=INT_MAX){
//               jumps[i]=min(jumps[i],jumps[j]+1);
//               break;
//            }
           	
// 		}
// 	}
// 	return jumps[n-1];
// }
// int main(){
// 	cin>>n;
// 	for(int i=0;i<n;i++)
// 		cin>>a[i];
// 	int ans=fun(a);
// }










































#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000000];
int fun(int a[]){
	int jumps[n+1];
	if(n==0  || a[0]==0)
		return INT_MAX;
	jumps[0]=0;
	for(int i=1;i<n;i++){
		jumps[i]=INT_MAX;
		for(int j=0;j<i;j++){
			if(j+a[j]>a[i] && jumps[j]!=INT_MAX){
               jumps[i]=min(jumps[i],jumps[j]+1);
               break;
			}
		}
	}
	return jumps[n-1];
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=fun(a);
}
