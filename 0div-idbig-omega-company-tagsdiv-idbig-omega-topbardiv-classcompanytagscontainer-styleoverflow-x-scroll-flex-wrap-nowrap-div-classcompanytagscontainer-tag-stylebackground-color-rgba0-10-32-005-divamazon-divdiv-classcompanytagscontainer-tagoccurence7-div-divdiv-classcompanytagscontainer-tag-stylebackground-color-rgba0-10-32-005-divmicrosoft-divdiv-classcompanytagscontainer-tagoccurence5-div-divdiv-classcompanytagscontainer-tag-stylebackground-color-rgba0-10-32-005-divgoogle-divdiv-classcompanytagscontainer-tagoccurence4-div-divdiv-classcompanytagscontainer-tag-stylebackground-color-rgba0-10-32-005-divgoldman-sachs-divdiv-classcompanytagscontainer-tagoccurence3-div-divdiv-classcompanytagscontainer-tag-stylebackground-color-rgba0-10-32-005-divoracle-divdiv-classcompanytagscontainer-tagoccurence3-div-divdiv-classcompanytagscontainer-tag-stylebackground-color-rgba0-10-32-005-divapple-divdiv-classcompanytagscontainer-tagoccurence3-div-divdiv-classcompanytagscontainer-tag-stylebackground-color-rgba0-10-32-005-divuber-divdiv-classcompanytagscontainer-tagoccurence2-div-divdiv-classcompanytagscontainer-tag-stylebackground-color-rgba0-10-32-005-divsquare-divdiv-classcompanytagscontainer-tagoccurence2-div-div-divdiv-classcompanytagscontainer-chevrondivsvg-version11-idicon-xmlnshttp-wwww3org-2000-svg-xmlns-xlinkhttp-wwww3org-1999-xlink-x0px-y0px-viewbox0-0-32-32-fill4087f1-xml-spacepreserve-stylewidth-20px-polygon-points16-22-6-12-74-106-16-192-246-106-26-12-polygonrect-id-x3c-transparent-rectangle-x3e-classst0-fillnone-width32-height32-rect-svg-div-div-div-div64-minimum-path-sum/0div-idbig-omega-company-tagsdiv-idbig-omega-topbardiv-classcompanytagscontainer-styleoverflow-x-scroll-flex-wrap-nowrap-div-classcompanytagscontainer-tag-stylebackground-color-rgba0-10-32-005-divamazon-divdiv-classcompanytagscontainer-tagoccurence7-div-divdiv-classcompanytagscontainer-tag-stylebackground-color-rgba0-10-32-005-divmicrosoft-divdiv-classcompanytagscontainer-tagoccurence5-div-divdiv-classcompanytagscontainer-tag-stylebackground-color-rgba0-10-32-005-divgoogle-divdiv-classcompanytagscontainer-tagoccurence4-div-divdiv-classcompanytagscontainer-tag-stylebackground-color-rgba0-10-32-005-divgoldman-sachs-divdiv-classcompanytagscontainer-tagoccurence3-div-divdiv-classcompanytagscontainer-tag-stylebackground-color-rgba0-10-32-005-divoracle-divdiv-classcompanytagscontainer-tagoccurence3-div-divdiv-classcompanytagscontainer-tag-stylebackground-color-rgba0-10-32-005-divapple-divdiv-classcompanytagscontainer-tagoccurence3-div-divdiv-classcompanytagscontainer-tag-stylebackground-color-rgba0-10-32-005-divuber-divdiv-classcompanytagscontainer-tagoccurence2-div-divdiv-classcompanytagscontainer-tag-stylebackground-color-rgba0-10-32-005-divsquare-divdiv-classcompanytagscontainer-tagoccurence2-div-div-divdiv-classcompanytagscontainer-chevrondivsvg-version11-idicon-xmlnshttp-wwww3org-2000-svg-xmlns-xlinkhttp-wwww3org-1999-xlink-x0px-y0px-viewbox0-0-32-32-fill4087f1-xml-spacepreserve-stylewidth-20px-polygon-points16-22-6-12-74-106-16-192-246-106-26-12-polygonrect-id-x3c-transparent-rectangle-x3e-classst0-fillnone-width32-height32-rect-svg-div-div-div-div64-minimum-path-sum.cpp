class Solution {
public:
    int fun(vector<vector<int>>&grid,vector<vector<int>>&dp,int n,int m,int i, int j)
    {
        if(i==n-1&&j==m-1)
        return grid[i][j];
        if(i>=n||j>=m)
        return INT_MAX;
        if(dp[i][j]!=-1)
        return dp[i][j];
        return dp[i][j]=min(fun(grid,dp,n,m,i+1,j),fun(grid,dp,n,m,i,j+1))+grid[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return fun(grid,dp,n,m,0,0);
    }
};