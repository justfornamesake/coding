#include <bits/stdc++.h>
using namespace std;
vector <int> adj[1000000];
bool visited[1000000];
int sum=0;
void dfs(int u){
  if(visited[u]){
  	return;
  }
  visited[u]=true;
  cout<<u<<" ";
  sum+=u;
  for(int i=0;i<adj[u].size();i++){

  	int v=adj[u][i];
  	if(visited[v]==false){
  		dfs(v);
  	}
  }
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	 for(int i=0;i<n;i++)
	 	visited[i]=false;
	int start;
	cin>>start;
	dfs(start);


}