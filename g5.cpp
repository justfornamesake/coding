#include <bits/stdc++.h>
using namespace std;
vector <int> adj[1000000];
int visited[1000000];
bool flag;
bool dfs(int u){
	visited[u]=true;
	for(int i=0;i<adj[u].size();i++){
		int v=adj[u][i];
		if(visited[v]){
			flag=true;
			break;
		}
		else{
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
	flag=false;
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=n;i++){
		if(visited[i]==false){
			dfs(i);
		}
	}
}