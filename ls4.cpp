#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};
node *reverse(node *head){
	node *cur=head;
	node *prev=NULL;
	node *next;
	while(cur!=NULL){
      next=cur->next;
      cur->next=prev;
      prev=cur;
      cur=next;
	}
	head=prev;
	return head;
}

void printnodes(node *head){
	node *cur=head;
	while(cur!=NULL){
		cout<<cur->data <<" ";
		cur=cur->next;
	}
	cout<<endl;
}

node *removeduplicates(node *head){
	node *cur=head;
	node *nextofnext;
	while(cur->next!=NULL){
		if(cur->data==cur->next->data){
			nextofnext=cur->next->next;
			free(cur->next);
			cur->next=nextofnext;
			
		}
		else
			cur=cur->next;
	}
	return head;
}
// swapping nodes
node *swaplist(node *head){
	node *cur=head;
	while(cur!=NULL && cur->next!=NULL){
		swap(cur->data,cur->next->data);
		cur=cur->next->next;
	}
	return head;
}
node *removekth(node *head,int k){
  int length=0;
  node *cur=head;
  node *temp=head;
  while(cur!=NULL)
  {
  	cur=cur->next;
  	length++;
  }
  cout<<"legth "<<length<<endl;
  int l=length-k-1;
  int c=l;

   while(c>0){
    	temp=temp->next;
 	    c--;
     }
     cout<<"temp->data"<<temp->data<<endl;
     temp->next=temp->next->next;
   return head;


}
node *merge(node *n1,node *n2){
	node *result=NULL;
	
	node *l1=n1;
	node *l2=n2;
	   //base cases
    if(l1==NULL)
    	return l2;
    else if(l2==NULL)
    	return l1;


	if(l1->data>=l2->data){
		result=l2;
		result->next=merge(l1,l2->next);
	}
	else{
		result=l1;
		result->next=merge(l1->next,l2);
	}
	return result;
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
	first->data=20;
	second->data=30;
	third->data=40;
	fourth->data=50;
	fifth->data=60;

	head->next=first;
	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;
	fifth->next=NULL;
	printnodes(head);

	node *head1,*first1,*second1,*third1,*fourth1,*fifth1;
	head1=NULL;
	first1=NULL;
	second1=NULL;
	third1=NULL;
	fourth1=NULL;
	fifth1=NULL;

	head1 =new node();
	first1=new node();
	second1=new node();
	third1=new node();
	fourth1=new node();
	fifth1=new node();

	head1->data=1;
	first1->data=200;
	second1->data=3;
	third1->data=400;
	fourth1->data=5;
	fifth1->data=600;

	head1->next=first1;
	first1->next=second1;
	second1->next=third1;
	third1->next=fourth1;
	fourth1->next=fifth1;
	fifth1->next=NULL;
	printnodes(head1);

	//printnodes(head);
    node *ans=merge(head,head1);
    printnodes(ans);
   
}