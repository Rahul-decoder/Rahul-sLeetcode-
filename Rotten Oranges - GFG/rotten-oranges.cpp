//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int i,j,n=grid.size(),m=grid[0].size(),count=0;
        queue<vector<pair<int,int>>> q;
        vector<pair<int,int>> v;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                v.push_back({i,j});
            }
        }
        if(v.size()>0)
        q.push(v);
        while(!q.empty())
        {
            vector<pair<int,int>> p,h;
            p=q.front();
            q.pop();
            for(i=0;i<p.size();i++)
            {
                int r=p[i].first;
                int s=p[i].second;
                if(r+1<n&&grid[r+1][s]==1)
                {
                h.push_back({r+1,s});
                grid[r+1][s]=2;
                }
                if(r-1>=0&&grid[r-1][s]==1)
                {
                h.push_back({r-1,s});
                grid[r-1][s]=2;
                }
                if(s+1<m&&grid[r][s+1]==1)
                {
                h.push_back({r,s+1});
                grid[r][s+1]=2;
                }
                if(s-1>=0&&grid[r][s-1]==1)
                {
                h.push_back({r,s-1});
                grid[r][s-1]=2;
                }
            }
            if(h.size()>0)
            {
            q.push(h);
            count++;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                return -1;
            }
        }
        return count;
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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends