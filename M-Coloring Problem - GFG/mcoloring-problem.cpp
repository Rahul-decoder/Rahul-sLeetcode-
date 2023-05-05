//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool issafe(bool graph[101][101],int j,vector<int> &v,int n,int k)
    {
        for(int i=0;i<n;i++)
        {
            if(graph[k][i]==1&&v[i]==j)
            return 0;
        }
        return 1;
    }
    bool fun(bool graph[101][101],int i,int m,int n,vector<int> &v)
    {
        if(i==n)
        return 1;
        for(int j=1;j<=m;j++)
        {
            if(issafe(graph,j,v,n,i))
            {
                v[i]=j;
                if(fun(graph,i+1,m,n,v))
                return 1;
                v[i]=0;
            }
        }
        return 0;
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
        vector<int> v(n,0);
       return fun(graph,0,m,n,v);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends