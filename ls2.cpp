#include <bits/stdc++.h>
using namespace std;
struct node {
	int data;
	node *next;
};
void printlist(node *head){
	node *cur=head;
	while(cur!=NULL){
		cout<<cur->data<<" ";
		cur=cur->next;
	}
	cout<<endl;
}
void middle(node *head){
	node *slow=head;
	node *fast=head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;

	}
	cout<<slow->data<<endl;
}
int main(){
	node *head,*first,*second,*third,*fourth,*fifth;
	head=NULL;
	first=NULL;
	second=NULL;
	third=NULL;
	fourth=NULL;
	fifth=NULL;
	head =new node();
	first=new node();
	second=new node();
	third=new node();
	fourth=new node();
	fifth=new node();

	head->data=10;
	head->next=first;
	first->next=second;
	first->data=20;
	second->data=30;
	second->next=third;
	third->next=fourth;
	third->data=40;
	fourth->data=50;
	fourth->next=fifth;
	fifth->next=NULL;
	fifth->data=60;
    printlist(head);
    middle(head);

}