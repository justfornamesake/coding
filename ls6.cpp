#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};
node *newnode(int val){
	node *temp=new node();
	temp->data=val;
	temp->next=NULL;
	return temp;
}
void printnodes(node *root){
	node *cur=root;
	while(cur!=NULL){
		cout<<cur->data<<" ";
		cur=cur->next;
	}
}
node *mergelinklist(node *a,node *b){
	node *result=NULL;
	if(a==NULL)
		return b;
	if(b==NULL)
		return a;
	if(a->data<=b->data){
		result=a;
		result->next=mergelinklist(a->next,b);
	}
	else{
		result=b;
		result->next=mergelinklist(a,b->next);
	}
	return result;
}
node *mergeklists(node* arr[],int last){
	while(last!=0){
		int i=0;
		int j=last;
		while(i<j){
			arr[i]=mergelinklist(arr[i],arr[j]);

			i++;
			j--;
			if(i>=j)
			   last=j;

		}
	}
	return arr[0];
}
int main(){
	node* arr[3];
	int no=3;
	arr[0]=newnode(10);
	arr[0]->next=newnode(111);
	arr[0]->next->next=newnode(100);
	arr[0]->next->next->next=newnode(1991);
   
    arr[1]=newnode(111111);
    arr[1]->next=newnode(11);
    arr[1]->next->next=newnode(9);
    arr[1]->next->next->next=newnode(22222);

    arr[2]=newnode(22211);
    arr[2]->next=newnode(11111111);
    arr[2]->next->next=newnode(88);
    arr[2]->next->next->next=newnode(882222);

    node *head=mergeklists(arr,no-1);
    printnodes(head);
}
