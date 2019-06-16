#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;

};
node *newnode(int val){
  node *temp=new node();
	temp->data=val;
	temp->right=NULL;
	temp->left=NULL;
	return temp;
}

void verticalorder(node *root){
	if(!root)
		return;
	map <int,vector <int> > m;
	int hd=0;
	queue <pair<node*,int> >q;
	q.push(make_pair(root,hd));
	while(!q.empty()){
		pair <node *,int> temp;
		temp=q.front();
		q.pop();
		hd=temp.second;
		node *node=temp.first;
		m[hd].push_back(node->data);
		if(node->left!=NULL){
			q.push(make_pair(node->left,hd-1));
		}
		if(node->right!=NULL)
		{
			q.push(make_pair(node->right,hd+1));
		}
	}
	map <int,vector <int> > ::iterator it;
	for(it=m.begin();it!=m.end();it++){
		for(int i=0;i<it->second.size();i){
			cout<<it->second[i]<<"";
		}
		cout<<endl;
	}


}

int main(){
	node *root=NULL;
   root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    root->right->left->right = newnode(8);
    root->right->right->right = newnode(9);
    root->right->right->left= newnode(10);
    root->right->right->left->right= newnode(11);
    root->right->right->left->right->right= newnode(12);
    verticalorder(root);

}