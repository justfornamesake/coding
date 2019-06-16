#include <bits/stdc++.h>
using namespace std;
int arr[10];
void rightmostmax(int arr[],int n){
    stack <int> s;
    s.push(arr[0]);
   
    for(int i=1;i<n;i++){
       if(s.empty()){
           s.push(arr[i]);
           continue;
       }
       while(!s.empty() && s.top()<arr[i]){
        int elem=s.top();
        s.pop();
        cout<<elem <<" "<<arr[i]<<endl;
      } 
       s.push(arr[i]);
    }
    while(!s.empty()){
        int elem=s.top();
        s.pop();
        cout<<elem <<" "<<-1<<endl;
        
    }
    
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rightmostmax(arr,n);
}