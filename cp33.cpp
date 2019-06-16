#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum1;
    cin>>sum1;
    int a[10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int low=i+1;
        int high=n-1;
        while(low<high){
            int sum=a[i]+a[low]+a[high];
            if(sum==sum1){
                cout<<a[i]<<" "<<a[low]<<" "<<a[high]<<endl;
            }
            else if (sum <sum1){
                low++;
            }
            else 
            high--;
        }
    }
}
    