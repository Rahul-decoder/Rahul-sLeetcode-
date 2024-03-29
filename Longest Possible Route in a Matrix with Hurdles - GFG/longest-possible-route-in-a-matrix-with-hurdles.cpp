//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
int maxi=-1,count=0;
void fun(vector<vector<int>> &matrix,int xs,int ys,int xd,int yd,vector<vector<int>> &vis,int n,int m)
{
    if(xs==xd&&ys==yd)
    {
        maxi=max(maxi,count);
        return;
    }
    if(xs<0||ys<0||xs>=n||ys>=m||vis[xs][ys]==1||matrix[xs][ys]==0)
    return ;
    vis[xs][ys]=1;
    count++;
    fun(matrix,xs+1,ys,xd,yd,vis,n,m);
    fun(matrix,xs-1,ys,xd,yd,vis,n,m);
    fun(matrix,xs,ys-1,xd,yd,vis,n,m);
    fun(matrix,xs,ys+1,xd,yd,vis,n,m);
    count--;
    vis[xs][ys]=0;
}
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        if(matrix[xd][yd]==0)
        return -1;
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        fun(matrix,xs,ys,xd,yd,vis,n,m);
        return maxi;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends