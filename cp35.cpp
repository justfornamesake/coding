#include <bits/stdc++.h>
using namespace std;
struct Queue {
    stack <int> s1,s2;
    void pushelement(int x){
        s1.push(x);

    }
    int popelement(){
        if(s1.empty()  && s2.empty()){
            cout<<"Queue is empty"<<endl;
        }
        if(s2.empty()){
            while(!s1.empty()){
                int elem=s1.top();
                s1.pop();
                s2.push(elem);
            }
        }
        int x=s2.top();
        s2.pop();
        return x;
    }
};
int main(){
    Queue q;
    q.pushelement(10);
    q.pushelement(11);
    q.pushelement(12);
    cout<<q.popelement()<<endl;
    cout<<q.popelement()<<endl;
    q.pushelement(13);
    cout<<q.popelement()<<endl;
}