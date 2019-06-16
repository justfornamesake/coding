#include <bits/stdc++.h>
using namespace std;
int a[100000];
int*alternatesort(int* arr,int len){
	sort(arr,arr+len);
	int a[len/2];
	int j=0;
	for(int i=0;i<len;i+=2){
		a[j]=arr[i];
		j++;
	}
	return a;

}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans*;
	ans=alternatesort(a,n);;
	for(int i=0;i<len/2;i++){
		cout<<ans[i]<<"";
	}
	cout<<endl;
}
