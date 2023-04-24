//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
void fun(int i,int j,int n,int m,vector<vector<int>> &v,int p,int newcolor)
{
    if(i>=n||j>=m||i<0||j<0||v[i][j]==newcolor||v[i][j]!=p)
    return;
    v[i][j]=newcolor;
    fun(i-1,j,n,m,v,p,newcolor);
    fun(i+1,j,n,m,v,p,newcolor);
    fun(i,j-1,n,m,v,p,newcolor);
    fun(i,j+1,n,m,v,p,newcolor);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        vector<vector<int>> v;
        v=image;
        int p=image[sr][sc];
        int n=image.size(),m=image[0].size();
        fun(sr,sc,n,m,v,p,newcolor);
         return v;
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