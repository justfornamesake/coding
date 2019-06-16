#include <bits/stdc++.h>
using namespace std;
#define ROW 5
#define COL 5
int countsum;
int ans=-1000000;
bool visited[ROW][COL];
int dx[8]={-1, -1, -1,  0, 0,  1, 1, 1};
int dy[8]={-1,  0,  1, -1, 1, -1, 0, 1};
bool issafe(int m[][COL],int row ,int col){
    if(row<0 || row>=ROW || col<0 || col>=COL){
		return  false;
	}
	return true;
}

void dfs(int m[][COL],int row,int col){
    visited[row][col]=true;
	countsum++;
	ans=max(ans,countsum);
	//cout<<"row and col marked visited"<<row<<" "<<col<<endl;
	for(int i=0;i<8;i++){
    	int newrow=  row+dx[i];
    	int newcol=  col+dy[i];
		
    	if(issafe(m,newrow,newcol) && m[newrow][newcol] && visited[newrow][newcol]==false){
    		dfs(m,newrow,newcol);
    	}
    }
 }

int main(){

	int m[][COL]={
         {1, 1, 0, 0, 0}, 
         {0, 1, 0, 0, 1}, 
         {1, 1, 1, 1, 1}, 
         {0, 0, 0, 0, 0}, 
         {1, 0, 1, 0, 1} 
	};
	memset(visited,false,sizeof(visited));
    
	for(int i=0;i<ROW;i++){
		for(int j=0;j<COL;j++){
			if(visited[i][j]==false && m[i][j]==1){
				countsum=0;
			//	cout<<"i"<<i<<"j"<<j<<endl;
				dfs(m,i,j);
				
		
			}
		}
	}
	cout<<ans<<endl;
}