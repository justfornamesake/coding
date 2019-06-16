#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};

node *cycle(node *head){

    node *slow=head;
    node *fast=head;
    bool cycle=false;
    while(slow!=NULL && fast !=NULL && fast->next!=NULL){
    	cout<<slow->data<<" "<<endl;
    	cout<<fast->data<<" "<<endl;
    	slow=slow->next;
    	fast=fast->next->next;
    	if(slow==fast){
            cycle=true;
            break;
    	}
    }
    cout<<"cycle "<<cycle<<endl;
    if(cycle==false)
    	return NULL;

    slow=head;
    while(slow!=fast){
    	slow=slow->next;
    	fast=fast->next;
    }
    return slow;
}
void printlist(node *head){
	node *cur=head;
	while(cur!=NULL){
		 cout<<cur->data<<" ";
		 cur=cur->next;
	}
	cout<<endl;
}

int main(){
    node *head, *first, *second, *third, *fourth, *fifth;
     head=NULL;
     first=NULL;
     second=NULL;
     third=NULL;
     fourth=NULL;
     fifth=NULL;
    head =new node();
    first =new node();
    second =new node();
    third=new node();
    fourth=new node();
    fifth= new node();

    head->data=10;
    head->next=first;

    first->data=20;
    first->next=second;

    second->next=third;
    second->data=30;

    third->next=fourth;
    third->data=40;

    fourth->next=fifth;
    fourth->data=50;

    fifth->next=third;
    fifth->data=60;
    //printlist(head);
    node *ans=cycle(head);
    if(ans==NULL)
    	cout<<"NO"<<endl;
    else
    cout<<ans->data<<endl;
}