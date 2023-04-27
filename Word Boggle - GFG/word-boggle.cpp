//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
bool fun1(vector<vector<char> >& board,int n,int m,string s,int i,int j,int r,vector<vector<int>> &v1)
{
    if(i<0||j<0||i>=n||j>=m||v1[i][j]==1)
    return 0;
    if(board[i][j]!=s[r])
    return 0;
    if(r==s.size()-1)
    return 1;
    v1[i][j]=1;
  bool res= fun1(board,n,m,s,i+1,j,r+1,v1)||fun1(board,n,m,s,i-1,j,r+1,v1)||fun1(board,n,m,s,i,j-1,r+1,v1)||
    fun1(board,n,m,s,i,j+1,r+1,v1)||fun1(board,n,m,s,i+1,j-1,r+1,v1)||fun1(board,n,m,s,i-1,j+1,r+1,v1)||
    fun1(board,n,m,s,i+1,j+1,r+1,v1)||fun1(board,n,m,s,i-1,j-1,r+1,v1);
    v1[i][j]=0;
    return res;
}
bool fun(vector<vector<char> >& board,int n,int m,string s)
{
    int i,j;
    vector<vector<int>> v1(n,vector<int>(m,0));
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               if(board[i][j]==s[0])
               {
                   if(fun1(board,n,m,s,i,j,0,v1))
                   return 1;
               }
           }
       }
       return 0;
}
	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	    int n=board.size(),m=board[0].size(),i;
	    vector<string> v;
	    for(i=0;i<dictionary.size();i++)
	    {
	       string s=dictionary[i];
	       if(fun(board,n,m,s))
	       v.push_back(s);
	    }
	    return v;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> dictionary;
        for (int i = 0; i < N; ++i) {
            string s;
            cin >> s;
            dictionary.push_back(s);
        }
        
        int R, C;
        cin >> R >> C;
        vector<vector<char> > board(R);
        for (int i = 0; i < R; i++) {
            board[i].resize(C);
            for (int j = 0; j < C; j++) cin >> board[i][j];
        }
        Solution obj;
        vector<string> output = obj.wordBoggle(board, dictionary);
        if (output.size() == 0)
            cout << "-1";
        else {
            sort(output.begin(), output.end());
            for (int i = 0; i < output.size(); i++) cout << output[i] << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends