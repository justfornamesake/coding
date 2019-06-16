// #include <bits/stdc++.h>
// using namespace std;
// map <char,int> m;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     m.clear();
//     bool flag=false;
//     for(int i=0;i<s.length();i++){
//          char c=s[i];
//          m[c]++;
//     }

//     for(int i=0;i<s.length();i++){
//         char c=s[i];
//        // cout<<s[i]<<m[c]<<endl;
//         if(m[c]==1){
//             cout<<s[i]<<endl;
//             flag=true;
//             break;
//         }
//     }

//     if(flag==false){
//         cout<<-1<<endl;
//     }
//     }
    


    
// }




#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>> s;
        pair <int ,int> arr[1000];
        for(int i=0;i<s.length();i++){
            arr[s[i]].first++;
            arr[s[i]].second=i;
        }
        int res=INT_MAX;
        for(int i=0;i<1000;i++){
            res=min(arr[s[i]].second ,res);
        }
        cout<< res<< endl;;
    }
}