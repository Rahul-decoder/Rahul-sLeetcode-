//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int n,int m, vector<vector<int>>& edges){
        vector<vector<pair<int,int>>> v(n);
        int i;
        for(i=0;i<m;i++)
        v[edges[i][0]].push_back({edges[i][2],edges[i][1]});
        vector<int> v1(n,INT_MAX),vis(n,0);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        while(pq.size()>0)
        {
            pair<int,int> p=pq.top();
            pq.pop();
            int a=p.first;
            int b=p.second;
            if(vis[b]==1)
            continue;
            vis[b]=1;
            v1[b]=a;
            for(auto x:v[b])
            {
                if(vis[x.second]==0)
                pq.push({a+x.first,x.second});
            }
            
        }
        for(i=0;i<n;i++)
        {
            if(v1[i]==INT_MAX)
            v1[i]=-1;
        }
        return v1;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends