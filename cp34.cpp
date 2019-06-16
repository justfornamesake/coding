#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum;
    cin>>sum;

    for(int i=0;i<n;i++)
    cin>>a[i];

    int cur_sum=a[i];
    int start =0;
    
    for(int i=1;i<n;i++){
        cur_sum=cur_sum+a[i];
        while(cur_sum >sum){
            cur_sum=cur_sum-a[start];
            start++;
        }
        if(cur_sum==sum)
        cout<<"lol"<<endl;
        cur_sum+=a[i];
    }
    

}