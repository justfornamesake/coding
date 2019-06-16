// #include <bits/stdc++.h>
// using namespace std;
// struct node{
// 	int data;
// 	node *left;
// 	node *right;
// };
// node *newNode(int val){
// 	node *temp =new node();
// 	temp->data=val;
// 	temp->left=NULL;
// 	temp->right=NULL;
// 	return temp;
// }
// void bfs(node *root){
// 	queue <node*> q;
// 	q.push(root);
// 	int level=0;
// 	int oddsum=0;
// 	int evensum=0;
// 	while(!q.empty()){
// 		int sz=q.size();
// 		 level++;
		
// 		while(sz>0){
// 			node *cur=q.front();
// 			q.pop();
// 			if(level%2==0)
// 			evensum+=cur->data;
// 		    else
// 		    oddsum+=cur->data;
// 		   if(cur->left!=NULL)
// 		   	q.push(cur->left);
// 		   if(cur->right!=NULL)
// 		   	q.push(cur->right);
// 		   sz--;  

// 		}
// 	}
// 	cout<<oddsum-evensum<<endl;
// }
// int main(){
// 	node *root=NULL;
// 	root=newNode(10);
// 	root->left=newNode(20);
// 	root->right=newNode(30);
// 	root->left->left=newNode(40);
// 	root->left->right=newNode(50);
// 	root->right->left=newNode(60);
// 	root->right->right=newNode(70);
// 	 bfs(root);
// }



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
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void bfs(node *root){
   queue <node*> q;
   q.push(root);
   int evensum=0;
   int oddsum=0;
   int level=0;
   while(!q.empty()){
   	   int sz=q.size();
   	   level+=1;
   	   cout<<"level"<<level<<endl;
   	   while(sz>0){
            node *cur=q.front();
            q.pop();
            cout<<cur->data<<endl;
            if(level%2==0)
            	evensum+=cur->data;
            else
            	oddsum+=cur->data;
            if(cur->left!=NULL)
            	q.push(cur->left);
            if(cur->right!=NULL)
            	q.push(cur->right);
            sz--;
           // cout<<"oddsum  isside while"<<oddsum<<endl;
            //cout<<"evensum  inside while "<<evensum<<endl;
   	   }
   	   cout<<endl;
   	   //cout<<"after queue now"<<endl;
   	   
   }
   
  cout<<oddsum-evensum<<endl;
}
int main(){
	node *root=NULL;
	root=newNode(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->left->left=newNode(40);
	root->left->right=newNode(50);
	root->right->left=newNode(60);
	root->right->right=newNode(70);
	 bfs(root);
}

































