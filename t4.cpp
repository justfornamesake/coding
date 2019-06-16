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
	else{
		root->right=insert(root->right,data);
	}
	return root;
}
bool identical(node *a,node *b){
	cout<<a->data<<" "<<b->data<<endl;
	if(a==NULL && b==NULL)
		return true;
	
		if(a!=NULL && b!=NULL){
			return
                (
                	 a->data ==b->data && identical(a->left,b->left) && identical(a->right,b->right)
                );
				
		  }  
	   return false;
}

int main(){
	node *root=NULL;
	root=insert(root,10);
	root=insert(root,200);
	root=insert(root,2992);

	node *root1=NULL;
	root1=insert(root1,10);
	root1=insert(root1,200);
	root1=insert(root1,2992);
	bool ans=identical(root,root1);
	cout<<ans<<endl;
}