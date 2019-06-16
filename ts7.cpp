#include <bits/stdc++.h>
using namespace std;
struct node {
	int data;
	node *left;
	node *right;
};
node *inorder(node *root){
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
node *NEWNODE(int val){
	node *root=new node();
	root->data=val;
	root->right=NULL;
	root->right=NULL;
	return root;
}
node *balanced(node *root,int start,int end,int a[]){
	if(start>end) 
		return NULL;
	int mid=(start+end)/2;
	int rootdata=a[mid];
	root=NEWNODE(rootdata);
	root->left=balanced(root->left,start,mid-1,a);
	root->right=balanced(root->right,mid+1,end,a);
	return root;
}

int main(){
	node *root=NULL;
    int a[5]={919,29992,99929,992,22};
	int n=5;
	node *ans=balanced(root,0,n,a);
	inorder(ans);
}
