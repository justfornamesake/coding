#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};
 void printnodes( node *n){
 	node *cur=n;
	while(cur!=NULL){
		cout<<cur->data<<" ";
		cur=cur->next;
	}
	cout<<endl;
}
int main(){
	node *head=NULL;
	node *second=NULL;
	node *third=NULL;

	head=new node();
	second=new node();
	third=new node();

	head->data=10;
	head->next=second;

	second->data=20;
	second->next=third;

	third->next=NULL;
	third->data=30;

	printnodes(head);


}