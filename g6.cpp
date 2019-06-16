// #include <bits/stdc++.h>
// using namespace std;
// vector <int> adj[100000];
// bool visited[10000000];
//  bool dfs(int u,int parent){
// 	visited[u]=true;
// 	for(int i=0;i<adj[u].size();i++){
// 		int v=adj[u][i];
// 		if(visited[v]==false){

//              dfs(v,u);
// 		}
// 		else{
//            if(v!=parent){
// 			return true;
// 		   }
// 		} 
// 	}
// 	return false;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	for(int i=1;i<=n;i++){
// 		int u,v;
// 		cin>>u>>v;
// 		adj[u].push_back(v);
// 		adj[v].push_back(u);
// 	}
// 	for(int i=0;i<=n;i++){
// 		visited[i]=false;
// 	}
// 	bool flag=false;
// 	for(int i=0;i<=n;i++){
// 		if(visited[i]==false){
            
// 			bool ans=dfs(i,-1);
// 			if(ans==true){

// 				flag=true;
// 				break;
// 			}
			
// 		}

// 	}

//   cout<<flag<<endl;
// }