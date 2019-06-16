#include <bits/stdc++.h>
using namespace std;
vector <int> adj[1000000];
bool visited[1000000];
void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int cur=q.front();
		q.pop();
		cout<<cur<<" ";
		for(int i=0;i<adj[cur].size();i++){
			int v=adj[cur][i];
			if(visited[v]==false){
				q.push(v);
				visited[v]=true;
			}
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
	for(int i=0;i<n;i++){
		visited[i]=false;
	}

	bfs(1);
}