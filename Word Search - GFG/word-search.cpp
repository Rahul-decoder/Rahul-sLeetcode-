//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
bool fun(vector<vector<char>> &board,int i,int j,string word,int p,vector<vector<int>> &v,int n,int m)
{
    if(p==word.size())
    return 1;
    if(i<0||j<0||i>=n||j>=m||v[i][j]==1||board[i][j]!=word[p])
    return 0;
    v[i][j]=1;
    bool a=fun(board,i+1,j,word,p+1,v,n,m);
    bool b=fun(board,i-1,j,word,p+1,v,n,m);
    bool c=fun(board,i,j+1,word,p+1,v,n,m);
    bool d=fun(board,i,j-1,word,p+1,v,n,m);
    v[i][j]=0;
    return a||b||c||d;
}
    bool isWordExist(vector<vector<char>>& board, string word) {
        int i,j,n=board.size(),m=board[0].size();
        vector<vector<int>> v(n,vector<int>(m,0));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(board[i][j]==word[0])
                {
                  if(fun(board,i,j,word,0,v,n,m))
                  return 1;
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends