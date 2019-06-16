#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left,*right;
};
node *insert(node *root,int val){
	if(root==NULL){
		root=new node();
		root->data=val;
		root->left=NULL;
		root->right=NULL;
	}
	 else if(root->data>=val){
		root->left=insert(root->left,val);
	}
	else 
		root->right=insert(root->right,val);
	return root;
}
void level(node *root,int depth){
	queue <node*> q;
	node *cur=root;
	q.push(cur);
	map <node *,int> m;
	m[cur]=depth;
	while(!q.empty()){
		cur=q.front();
		q.pop();
        depth++;
		cout<<cur->data<<" "<<m[cur]<<" ";
		if(cur->left!=NULL){
			q.push(cur->left);
			m[cur->left]=depth;
		}
		if(cur->right!=NULL){
			q.push(cur->right);
		    m[cur->right]=depth;
		}
		
	}

}
int main(){
	node *root=NULL;
	root=insert(root,100);
	root=insert(root,90);
	root=insert(root,1990);
	root=insert(root,198);
	root=insert(root,1999191);
	root=insert(root,111111111);
	int depth=0;
	level(root,depth);
}