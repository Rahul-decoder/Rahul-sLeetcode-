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
        vector<int> v1(n,INT_MAX);
        queue<pair<int,int>> pq;
        pq.push({0,0});
        v1[0]=0;
        while(pq.size()>0)
        {
            pair<int,int> p=pq.front();
            pq.pop();
            int a=p.first;
            int b=p.second;
            for(auto x:v[b])
            {
                if(a+x.first<v1[x.second])
                {
                    v1[x.second]=a+x.first;
                    pq.push({v1[x.second],x.second});
                }
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