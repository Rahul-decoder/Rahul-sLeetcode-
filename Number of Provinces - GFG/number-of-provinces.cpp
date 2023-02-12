//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    void dfs(vector<int> v[],int s,vector<int> &v1)
    {
        v1[s]=1;
        for(auto x:v[s])
        {
            if(v1[x]==0)
            dfs(v,x,v1);
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> v[V];
        int i,count=0,j;
        vector<int> v1(V,0);
        for(i=0;i<V;i++)
        {
            for(j=0;j<V;j++)
            {
                if(adj[i][j]==1)
                v[i].push_back(j);
            }
        }
        for(i=0;i<V;i++)
        {
          if(v1[i]==0)
          {
              count++;
              dfs(v,i,v1);
          }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends