#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
node *insert(node *root,int data){
	if(root==NULL){
		root=new node();
		root->data=data;
		root->left=root->right=NULL;
	}
	else if(root->data>=data){
		root->left=insert(root->left,data);
	}
	else
		root->right=insert(root->right,data);

	return root;

}
void preorder(node *root){
	if (root==NULL)
		return ;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);

}

void inorder(node *root){
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(node *root){
	if (root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
int main(){
	node *root=NULL;
	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,30);
	root=insert(root,8);
	cout<<"Inorder"<<endl;
	inorder(root);
	cout<<endl;
	cout<<"preorder"<<endl;
	preorder(root);
	cout<<endl;
	cout<<"postorder"<<endl;
	postorder(root);
	cout<<endl;
}