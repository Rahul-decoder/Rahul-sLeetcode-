//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool fun(vector<int> adj[],vector<int> &vis,int i)
  {
      queue<int> q;
      map<int,int> m;
      q.push(i);
      m[i]++;
      while(!q.empty())
      {
          int p=q.front();
          q.pop();
          vis[p]=1;
          for(auto x:adj[p])
          {
              if(vis[x]==0)
              {
                  q.push(x);
                  m[x]++;
              }
              if(m[x]>1)
              return 1;
          }
      }
      return 0;
  }
    bool isCycle(int v, vector<int> adj[]) {
        vector<int> vis(v,0);
        int i;
        for(i=0;i<v;i++)
        {
            if(vis[i]==0)
            {
               if(fun(adj,vis,i))
               return 1;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends