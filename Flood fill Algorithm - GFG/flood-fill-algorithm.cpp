//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    void dfs(vector<vector<int>> &image,int i,int j,int n, int m,int newcolor,int color)
    {
        if(i<0||i>=n||j<0||j>=m||image[i][j]==newcolor||image[i][j]!=color)
        return ;
        image[i][j]=newcolor;
        dfs(image,i+1,j,n,m,newcolor,color);
        dfs(image,i-1,j,n,m,newcolor,color);
        dfs(image,i,j+1,n,m,newcolor,color);
        dfs(image,i,j-1,n,m,newcolor,color);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int color=image[sr][sc];
        int n=image.size();
        int m=image[0].size();
        dfs(image,sr,sc,n,m,newcolor,color);
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends