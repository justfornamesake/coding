#include <bits/stdc++.h>
using namespace std;
struct node{
	int data ;
	node *left;
	node *right;
};
node *newNode(int val){
	node *temp= new node();
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
int kleaves(node *root,int k){
	if (root==NULL)
		return 0;
	if(root->left==NULL && root->right==NULL)// leaf node
		return 1;
	int sum=kleaves(root->left,k)+kleaves(root->right,k);
	if(sum==2)
		cout<<root->data<<endl;
	return sum;
}
int main(){
	node *root=NULL;
	root=newNode(1);
	root->left        = newNode(2); 
    root->right       = newNode(4); 
    root->left->left  = newNode(5); 
    root->left->right = newNode(6); 
    root->left->left->left  = newNode(9); 
    root->left->left->right  = newNode(10); 
    root->right->right = newNode(8); 
    root->right->left  = newNode(7); 
    root->right->left->left  = newNode(11); 
    root->right->left->right  = newNode(12);
    kleaves(root,2);

}