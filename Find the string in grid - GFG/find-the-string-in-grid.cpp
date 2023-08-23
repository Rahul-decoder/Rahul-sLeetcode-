//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
bool fun(vector<vector<char>>&grid,string &word,int i,int j,int p1,int n,int m)
{
     int dr[8]={1,-1,0,0,1,-1,-1,1};
     int dc[8]={0,0,1,-1,1,1,-1,-1};
     for(int k=0;k<8;k++)
     {
         int r=i+dr[k],q=j+dc[k],p=p1;
         if(r>=0&&q>=0&&r<n&&q<m&&grid[r][q]==word[p])
         {
            p++;
            while(p<word.size())
            {
                r=r+dr[k];
                q=q+dc[k];
                if(r>=0&&q>=0&&r<n&&q<m&&grid[r][q]==word[p])
                p++;
                else
                break;
                
            }
         }
         if(p==word.size())
          return 1;
     }
     return 0;
}
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	   int i,j,n=grid.size(),m=grid[0].size();
	   vector<vector<int>> v;
	   for(i=0;i<n;i++)
	   {
	       for(j=0;j<m;j++)
	       {
	           if(grid[i][j]==word[0]&&fun(grid,word,i,j,1,n,m))
	           v.push_back({i,j});
	       }
	   }
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
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends