#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int i,j,k;
    int L[n1];
    int R[n2];
    for(i=0;i<n1;i++){
      L[i]=arr[low+i];
    }
    for(j=0;j<n2;j++)
      R[j]=arr[mid+1+j];

      i=0;
      j=0;
      k=0;
      while(i<n1 && j<n2){
          if(L[i]<=R[j]){
              arr[k]=L[i];
              i++;
          }
          else{
              arr[k]=R[j];
              j++;
          }
          k++;
      }
      while(i<n1){
          arr[k]=L[i];
          i++;
          j++;
      }
      while(j<n2){
          arr[k]=R[j];
          j++;
          k++;
      }
    



}
 void mergesort(int arr[],int low ,int high){
     if(low<high){
         int mid=(low+high)/2;
         mergesort(arr,low,mid);
         mergesort(arr,mid+1,high);
         merge(arr,low,mid,high);
     }
 }
int main(){
    int arr[6]={9,8,199,1888,77,8888};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);

}