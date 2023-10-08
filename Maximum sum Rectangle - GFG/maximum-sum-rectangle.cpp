//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maximumSumRectangle(int r, int c, vector<vector<int>> m) {
       int maxi=INT_MIN,i,j,k;
       for(i=0;i<c;i++)
       {
           int sum=0;
           for(k=0;k<r;k++)
           {
               sum+=m[k][i];
               maxi=max(maxi,sum);
               if(sum<0)
               sum=0;
           }
           for(j=i+1;j<c;j++)
           {
               sum=0;
               for(k=0;k<r;k++)
               m[k][i]+=m[k][j];
               for(k=0;k<r;k++)
               {
                   sum+=m[k][i];
                   maxi=max(maxi,sum);
                   if(sum<0)
                   sum=0;
               }
           }
       }
       return maxi;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}
// } Driver Code Ends