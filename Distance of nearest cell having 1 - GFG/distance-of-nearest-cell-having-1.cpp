//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int i,j;
	    int n=grid.size(),m=grid[0].size();
	    queue<pair<pair<int,int>,int>> q;
	    vector<vector<int>> vis(n,vector<int>(m,0));
	    vector<vector<int>> dis(n,vector<int> (m,0));
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            if(grid[i][j]==1)
	            {
	                vis[i][j]=1;
                    q.push({{i,j},0});
	            }
	        }
	    }
	    while(!q.empty())
	    {
	        int r=q.front().first.first;
	        int c=q.front().first.second;
	        int s=q.front().second;
	        dis[r][c]=s;
	        q.pop();
	        int dr[]={-1,0,1,0};
	        int dc[]={0,1,0,-1};
	        for(i=0;i<4;i++)
	        {
	            int r1=dr[i]+r;
	            int c1=dc[i]+c;
	            if(r1>=0&&r1<n&&c1>=0&&c1<m&&vis[r1][c1]==0)
	            {
	                vis[r1][c1]=1;
	                q.push({{r1,c1},s+1});
	            }
	        }
	    }
	    return dis;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends