#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};
void printnodes(node *head){
	node *cur=head;
	while(cur!=NULL){
		cout<<cur->data <<" ";
		cur=cur->next;
	}
	cout<<endl;
}
int lengthoflinkedlist(node *head){
	node *cur=head;
	int l=0;
	while(cur!=NULL){
		cur=cur->next;
		l++;
	}
	return l;
}
node *middle(node *head){
	node *slow=head;
	node *fast=head;
	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}
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

bool palindrome(node *head){
	int length=lengthoflinkedlist(head);

	node *mid=middle(head);
	//printnodes(mid);
    node *midreversed=reverse(mid);
    node *cur=midreversed;
    
    int c=0;
    bool flag=false;
    while(c<length/2){
       c++;
       if(cur->data!=head->data){
       	  flag=true;
       	  break;
       }
       else{
       	cur=cur->next;
       	head=head->next;
       }	

    }
    if(flag==true)
    	return false;
    else
    	return true;;

	
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
	second->data=301;
	third->data=30;
	fourth->data=20;
	fifth->data=10;

	head->next=first;
	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;
	fifth->next=NULL;


    //printnodes(head);
	//palindrome(head);
	bool ans=palindrome(head);
	cout<<ans<<endl;

	//printnodes(head);
	//palindrome(head);

}