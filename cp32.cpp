#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //find the first decreasing element from right side  such that a[i]<a[i+1]
    int index=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
             index=i;
        } 
    }
   // cout<<index<<endl;
    if(index==-1){
        // if no such element is found it means it is just like 9 8 7 6 5 so sort it
        sort(arr,arr+n);
        printarray(arr,n);
        return 0;
        
    }
    // now find the just next larger element in array
    int largerindex=-1;
    for(int i=index+1;i<n;i++){
        if(arr[index]<arr[i]){
            largerindex=i;
        }
    }
    swap(arr[index],arr[largerindex]);
    sort(arr+index+1,arr+n);
    printarray(arr,n);
}