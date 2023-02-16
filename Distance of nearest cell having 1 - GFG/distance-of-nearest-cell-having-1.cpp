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
	    int i,j,ans=0;
	    int n=grid.size(),m=grid[0].size();
	    queue<vector<pair<int,int>>> q;
	    vector<vector<int>> vis(n,vector<int>(m,0));
	    vector<vector<int>> dis(n,vector<int> (m,0));
	     vector<pair<int,int>> v1;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            if(grid[i][j]==1)
	            {
	                vis[i][j]=1;
                    v1.push_back({i,j});
	            }
	        }
	    }
	    q.push(v1);
	    int dr[]={1,0,-1,0};
	    int dc[]={0,-1,0,1};
	    while(!q.empty())
	    {
	        vector<pair<int,int>> v,h;
	        v=q.front();
	        q.pop();
	        for(i=0;i<v.size();i++)
	        {
	            int r=v[i].first;
	            int c=v[i].second;
	            dis[r][c]=ans;
	            for(j=0;j<4;j++)
	            {
	                int r1=r+dr[j];
	                int c1=c+dc[j];
	                if(r1>=0&&r1<n&&c1>=0&&c1<m&&vis[r1][c1]==0)
	                {
	                    vis[r1][c1]=1;
	                    h.push_back({r1,c1});
	                }
	            }
	        }
	        if(h.size()>0)
	        {
	            ans++;
	            q.push(h);
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