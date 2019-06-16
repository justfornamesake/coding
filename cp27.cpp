// #include <bits/stdc++.h>
// using namespace std;
// struct node{
// 	int data;
// 	int hd;
// 	node *left;
// 	node *right;;
// };
// node *newnode(int val){
// 	node *temp =new node();
// 	temp->data=val;
// 	temp->hd=INT_MAX;
// 	temp->left=temp->right=NULL;
// 	return temp;
// }
// void bottomview(node *root){
// 	if(root==NULL)
// 		return;
// 	int hd=0;
// 	map<int,int> m;
// 	queue <node*> q;
// 	root->hd=0;
// 	q.push(root);
// 	while(!q.empty()){
// 		node *cur=q.front();
// 		q.pop();
// 		hd=cur->hd;
// 		m[hd]=cur->data;
// 		if(cur->left!=NULL){
// 			cur->left->hd=hd-1;
// 			q.push(cur->left);
// 		}
// 		if(cur->right!=NULL){
// 			curN->right->hd=hd+1;
// 			q.push(cur->right);
// 		}

// 	}
// 	for(auto i=m.begin();i!=m.end();i++){
// 		cout<<i->second<<endl;
// 	}

// }
// int main(){
//   node *root=NULL;
//   root=newnode(20);
//   root->left=newnode(8);
//   root->right=newnode(22);
//   root->left->left=newnode(5);
//   root->left->right=newnode(3);
//   root->right->left=newnode(4);
//   root->right->right=newnode(25);
//   root->left->right->left=newnode(10);
//   root->left->right->right=newnode(14);
//   bottomview(root);
// }

#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	int hd;
	node *left;
	node *right;
};

node *newnode(int val){
	node *temp= new node();
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;
	temp->hd=INT_MAX;
}
void bottom(node *root){
	if(root==NULL)
		return ;
	map<int ,int> m;
	queue <node*> q;
	q.push(root);
	int hd=0;
	root->hd=0;
	while(!q.empty()){
		node *cur=q.front();
		q.pop();
		hd=cur->hd;
		m[hd]=cur->data;
		if(root->left!=NULL)
		{
			root->left->hd=hd-1;
			q.push(root->left);
		}
		if(root->right!=NULL){
			root->right->hd=hd+1;
			q.push(root->right);
		}
	}
	for(auto i=m.begin();i!=m.end();i++){
		cout<<i->second<<endl;
	}

}
int main(){
  node *root;
  root=newnode(20);
  root->left=newnode(8);
  root->right=newnode(22);
  root->left->left=newnode(5);
  root->left->right=newnode(3);
  root->right->left=newnode(4);
  root->right->right=newnode(25);
  root->left->right->left=newnode(10);
  root->left->right->right=newnode(14);
  bottom(root);
}
