#include <iostream>
using namespace std;
int a[1000000];
typedef long long int ll;
ll leftproduct[10000000];
ll rightproduct[1000000];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		leftproduct[0]=1;
		rightproduct[n-1]=1;
		for(int i=1;i<n;i++){
			leftproduct[i]=leftproduct[i-1]*a[i-1];
		}
		for(int i=n-2;i>=0;i--){
			rightproduct[i]=rightproduct[i+1]*a[i+1];
		}
		for(int i=0;i<n;i++){
			cout<<leftproduct[i]*rightproduct[i]<<" ";
		}
		cout<<endl;
		

	}
}