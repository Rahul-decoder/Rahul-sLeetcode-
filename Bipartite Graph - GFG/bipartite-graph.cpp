//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	bool isBipartite(int v, vector<int>adj[]){
	    int a[v],i,j;
	    for(i=0;i<v;i++)
	    a[i]=-1;
	    for(j=0;j<v;j++)
	    {
	        if(a[j]==-1)
	        {
	    queue<int> q;
	    q.push(j);
	    a[j]=0;
	    while(!q.empty())
	    {
	        int p=q.front();
	        vector<int> v1=adj[p];
	        q.pop();
	        for(i=0;i<v1.size();i++)
	        {
	           if(a[v1[i]]==-1)
	           {
	               q.push(v1[i]);
	               if(a[p]==0)
	               a[v1[i]]=1;
	               else
	               a[v1[i]]=0;
	           }
	           else if(a[v1[i]]==a[p])
	           return false;
	        }
	    }
	        }
	    }
	    return true;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends