#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>> s;
        char visited[256];
        int cur_len=1;
        int max_len=1;
        int previous_index;
        for(int i=0;i<s.length();i++){
            visited[s[i]]=-1;
        }
        visited[s[0]]=0;
        for(int i=1;i<s.length();i++){
            char c=s[i];
             previous_index=visited[c];
            if(previous_index==-1 || i-cur_len > previous_index ){
                // not visited previously 
                cur_len++;
                
            }
            else{
                max_len=max(max_len,cur_len);
                cur_len=i-previous_index;

            }
            visited[s[i]]=i;
        }
        free(visited);
        cout <<max(cur_len,max_len)<<endl;

    }
}