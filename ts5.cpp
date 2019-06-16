#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
node *insert(node *root,int val){
	if(root==NULL){
		root=new node();
		root->data=val;
		root->right=root->left=NULL;
	}
	 else if(root->data>=val){
	 	root->left=insert(root->left,val);
	 }
	 else{
	 	root->right=insert(root->right,val);
	 }
}
void inoder(node *root){
	    if(root==NULL)
	   	return;
		inoder(root->left);
        cout<<root->data<<endl;
	    inoder(root->right);

}
bool haspathsum(node *root,int sum){
    if(root==NULL)
    	return false;
     int subsum=sum- root->data;
     cout<<"subsum"<<subsum<<endl;
     cout<<"root->left"<<root->left<<endl;
     cout<<"root->right"<<root->right<<endl;
     if(subsum==0 && root->left==NULL && root->right==NULL){
     
     	return true;
     }
     
     	return haspathsum(root->left,subsum) || haspathsum(root->right,subsum);
     
}

node *invert(node *root){
	if(root==NULL)
	  return NULL;
	invert(root->left);
	invert(root->right);
	node *temp=root->right;
	root->right=root->left;
	root->left=temp;
    // return root;
}

int main(){
	node *root=NULL;

	root=insert(root,100);
	root=insert(root,39);
	root=insert(root,190);
	root=insert(root,178);
	inoder(root);
	cout<<endl;
	bool ans=haspathsum(root,139);
	cout<<ans<<endl;
}
