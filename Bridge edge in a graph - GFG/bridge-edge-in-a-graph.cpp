//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    void fun1(vector<int> adj[],int i,vector<int> &vis)
    {
        vis[i]=1;
        for(auto x:adj[i])
        {
            if(vis[x]==0)
            {
              fun1(adj,x,vis);
            }
        }
    }
    void fun(vector<int> adj[],int c,int d,int i,vector<int> &vis)
    {
        vis[i]=1;
        for(auto x:adj[i])
        {
            if(vis[x]==0)
            {
              if((i!=c||x!=d)&&(i!=d||x!=c))
              fun(adj,c,d,x,vis);
            }
        }
    }
    int isBridge(int v, vector<int> adj[], int c, int d) 
    {
        vector<int> vis(v,0);
        int i,count=0,count1=0;
        for(i=0;i<v;i++)
        { if(vis[i]==0)
          {
            fun1(adj,i,vis);
            count++;
          }
        }
        for(i=0;i<v;i++)
        vis[i]=0;
        for(i=0;i<v;i++)
        {
            if(vis[i]==0)
            {
                fun(adj,c,d,i,vis);
                count1++;
            }
        }
        if(count1-count==0)
        return 0;
        return 1;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}


// } Driver Code Ends