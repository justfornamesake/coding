#include <bits/stdc++.h>
#include <vector>
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
	else if (root->data>=data){
		root->left=insert(root->left,data);
	}
	else{
		root->right=insert(root->right,data);
	}
	return root;

}
vector <int> inoder(node *root){
	vector <int> v;
	stack <node*> s;
	bool done=false;
	node *cur=root;
	while(done==false){
		if(cur!=NULL){
			s.push(cur);
			cur=cur->left;
		}
		else{
             if(s.empty()==true){
             	done=true;
             }
             else{
                  cur=s.top();
                  s.pop();
                  v.push_back(cur->data);
                  cur=cur->right;

                 
             }

		}
	}
	return v;
}
void kthsmallest(node *root,int c,int k){
     if(root==NULL || c>=k)
     	return ;
     kthsmallest(root->left,c,k);
     c++;
     if(c==k){
     	cout<<root->data<<endl;
     	return;
     }
     kthsmallest(root->right,c,k);

}
vector <int> preorder(node *root){
	 vector <int> res;
	 if(!root)
	 	return res;
	 stack<node*> s;
	 s.push(root);
	 while(!s.empty()){
	 	node *temp= s.top();
	 	res.push_back(temp->data);
	 	s.pop();
	 	if(temp->right!=NULL){
	 		s.push(temp->right);
	 	}
	 	if(temp->left!=NULL){
	 		s.push(temp->right);
	 	}
	 }

  return res;
}

bool identical(node *a,node *b){
	if(a==NULL && b==NULL){
		return true;
	}
	else{
		if(a!=NULL && b!=NULL){
			if(a->data==b->data){
				int x1=identical(a->left,b->left);
				int x2=identical(b->right,b->right);
				if(x1==true && x2==true)
					return true;
			}
		}
	}
	return false;
}
// vector <int> inoder(node *root){
// 	vector <int> res;
// 	node *cur=root;
// 	stack <node*> s;
// 	bool done=false;
// 	while(done==false){
//        if(cur!=NULL){
//          s.push(cur);
//          cur=cur->left;
//        }
//        else{

//        	  if(s.empty()==true){
//        	  	done=true;
//        	  }
//        	  else{
//                cur=s.top();
//                s.pop();
//                res.push_back(cur->data);
//                cur=cur->right;

//        	  }
//        }
//    }

// return res;
// }
int balanced(node *root){
	if (root==NULL)
		return 0;
	int lh=balanced(root->left);
	// if(lh==-1){
	// 	return -1;
	// }
	int rh=balanced(root->right);
	// if(rh==-1){
 //       return -1;
	// }
	// int diff=abs(lh-rh);
	// if(diff>1){
	// 	return -1;
	// }
	return max(lh,rh)+1;

}
int main(){
   node *root=NULL;
   root=insert(root,10);
   root=insert(root,20);
   root=insert(root,30);
   root=insert(root,40);
   root=insert(root,100);
   // vector <int> v;
   // v=preorder(root);
   // for(int i=0;i<v.size();i++){
   // 	cout<<v[i]<<" ";
   // }
    //cout<<endl;
   //cout<<v[2]<<endl;

   // node *root1=NULL;
   // root1=insert(root1,10);
   // root1=insert(root1,20);
   // root1=insert(root1,30);
   // root1=insert(root1,40);
   // root1=insert(root1,70);
   // bool ans=identical(root,root1);
   //cout<<ans<<endl;
   //int c=0;
   //kthsmallest(root,c,3);
   int ans=balanced(root);
   cout<<ans<<endl;
  
}