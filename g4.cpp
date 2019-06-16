#include <bits/stdc++.h>
using namespace std;
vector <int> adj[1000000];
bool visited[1000000];
void dfs(int u){
	if(visited[u]){
		return ;
	}
	visited[u]=true;
	for(int i=0;i<adj[u].size();i++){
		int v=adj[u][i];
		if(visited[v]==false){
			visited[v]=true;
			dfs(v);
		}
	}
}
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int count=0;
	memset(visited,false,sizeof(visited));
	for(int i=1;i<n;i++){
		if(visited[i]==false){
			dfs(i);
			count++;
		}
	}
	cout<<count<<endl;
}