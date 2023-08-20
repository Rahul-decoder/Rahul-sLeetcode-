//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        int i,j,n=matrix.size(),m=matrix[0].size(),count1=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                int count=0;
                if(matrix[i][j]==1)
                {
                    if(i-1>=0&&matrix[i-1][j]==0)
                    count++;
                    if(i+1<n&&matrix[i+1][j]==0)
                    count++;
                    if(j-1>=0&&matrix[i][j-1]==0)
                    count++;
                    if(j+1<m&&matrix[i][j+1]==0)
                    count++;
                    if(i+1<n&&j+1<m&&matrix[i+1][j+1]==0)
                    count++;
                    if(i+1<n&&j-1>=0&&matrix[i+1][j-1]==0)
                    count++;
                    if(i-1>=0&&j-1>=0&&matrix[i-1][j-1]==0)
                    count++;
                    if(i-1>=0&&j+1<m&&matrix[i-1][j+1]==0)
                    count++;
                }
                if(count%2==0&&count!=0)
                count1++;
            }
        }
        return count1;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends