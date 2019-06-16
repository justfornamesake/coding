#include <bits/stdc++.h>
using namespace std;
bool checker(string s){
    stack <char> s;
    bool flag=false;
    for(int i=0;i<s.length();i++){
        char c=s[i];
        if(c=='(' || c=='[' || c=='{'){
            s.push(c);
           continue;
        }
        if(s.empty())
        flag=true;
        else{
            //
            char x;
            switch(c){
                case ')':
                    x=s.top();
                   s.pop();
                   if(x!='(');
                   flag=true;
                   break;
                case '}':
                     c=s.top();
                   s.pop();
                   if(x!='{')
                   flag=true;
                   break;
                case ']':
                 c=s.top();
                s.pop();
                flag=true;
                break;


            }
        }
        
    }
}
int main(){

    string expr = "{()}[]"; 
    bool ans=checker(expr);

}