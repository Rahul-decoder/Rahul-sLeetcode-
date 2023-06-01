//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void fun(vector<int> adj[], int i,vector<int> &v1,vector<int> &v)
    {
        v1[i]=1;
        v.push_back(i);
        for(auto x:adj[i])
        {
            if(v1[x]==0)
            fun(adj,x,v1,v);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> v,v1(V,0);
        fun(adj,0,v1,v);
        return v;
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
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends