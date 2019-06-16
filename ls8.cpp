#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *newNode(int val){
    node *temp =new node();
    temp->data=val;
    temp->next=NULL;
    return temp;
}
node  *mergesort(node *l1,node *l2){
   // cout<<1<<endl;
    if(l1==NULL)
    return l2;
    if(l2==NULL)
    return l1;
    node *res=NULL;
    
   if(l1->data<l2->data){
       res=l1;
       l1=l1->next;
   }
   else{
       res=l2;
       l2=l2->next;
   }
   node *temp=res;
   while(l1!=NULL && l2!=NULL){
       if(l1->data<l2->data){
           temp->next=l1;
           l1=l1->next;
       }
       else{
           temp->next=l2;
           l2=l2->next;
       }
       temp=temp->next;
       
   }
   if(l1)
   temp->next=l1;
   else
   temp->next=l2;

   return res; 
    
}
node *sortlist(node *head){
    node *slow=head;
    node *fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    fast->next=slow;
     //cout<<fast->data<<endl;
    slow->next=NULL;
   
    mergesort(head,fast);
    
}
void printnodes(node *head){
    //cout<<"fine "<<endl;
    node *cur=head;
    while(cur!=NULL){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
}
int main(){
    node *head=NULL;
    node *first=NULL;
    node *second=NULL;
    node *third=NULL;
    
    head=new node();
    first=new node();
    second=new node();
    third=new node();

    head->data=100;
    first->data=20;
    second->data=300;
    third->data=40;
    
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=NULL;
    //printnodes(head);
    
    node *ans=sortlist(head);
    printnodes(ans);
    
}