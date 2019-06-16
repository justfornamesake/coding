#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int b[1000000];
 int max_path_sum(int a[], int b[], int n, int m)
{  
	 cout<<"a"<<a<<endl;
     int result=0;
     int sum1=0;
     int sum2=0;
     int i=0;int j=0;
     while(i<n && j<m){
           if(a[i]>a[j]){
           	sum1+=a[i];
           	i++;
           }
           else if (a[i]<a[j]){
           	sum2+=a[j];
           	j++;
           }
           
           else{
           	  result+=max(sum1,sum2);
              while(i<n && j<m && a[i]==a[j]){
              	result+=a[i];
              	i++;
              	j++;
              }
              sum1=0;
              sum2=0;
              
           }
       

     }
     while(i<n){
     	sum1+=a[i];
     }
     while(j<m){
     	sum2+=a[j];
     }
     result+=max(sum1,sum2);
     return result;

}
int main(){
   int n;cin>>n;
   int m;cin>>m;
   for(int i=0;i<n;i++){
   	cin>>a[i];
   }
   for(int j=0;j<m;j++){
   	cin>>b[j];
   }
   int ans=max_path_sum(a,b,n,m);
   cout<<ans<<endl;

}