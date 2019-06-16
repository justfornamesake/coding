#include <bits/stdc++.h>
using namespace std;
bool visited[1000000];
vector <int> adj[1000000];
int dist[1000000];
int bfs(int u){
	for(int i=0;i<1000000;i++)
		visited[i]=false;

	int node;
	for(int i=0;i<1000000;i++)
		dist[i]=-1;

	dist[u]=0;
	queue <int> q;
	q.push(u);
	cout<<"u"<<u<<endl;
	while(!q.empty()){
		int cur=q.front();
		q.pop();
		for(int i=0;i<adj[cur].size();i++){
			int v=adj[cur][i];
			if(dist[v]==-1)
				dist[v]=dist[cur]+1;
			q.push(v);
		}

	}

	int maxdist=-1000000;
	for(int i=0;i<1000000;i++){
		if(dist[i]>maxdist){
           node=i;
           maxdist=dist[i];  
		}
	}
	return node;

}
int main(){
	int n;
	cin>>n;
	int start;
	for(int i=0;i<n;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
    
	int x1=bfs(start);
	cout<<"x1"<<x1<<endl;
}