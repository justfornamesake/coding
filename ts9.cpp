#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
node *newNode(int val){
   node *temp=new node();
   temp->data=val;
   temp->right=NULL;
   temp->left=NULL;
   return temp;
}
 void leftview(node *root,int level,int *maxlevel){
	if(root==NULL)
		return;
	if(level> *maxlevel){
		//cout<<"level"<<level <<"maxlevel"<<maxlevel<<endl;
		cout<<root->data<<" ";
		*maxlevel=level;
	}
	leftview(root->left,level+1,maxlevel);
	leftview(root->right,level+1,maxlevel);
}
int main(){
	node *root=NULL;
	root= newNode(12);
	root->left=newNode(10);
	root->right=newNode(30);
	root->right->left=newNode(25);
	root->right->right=newNode(40);
	int maxlevel=0;
	leftview(root,1, &maxlevel);
}