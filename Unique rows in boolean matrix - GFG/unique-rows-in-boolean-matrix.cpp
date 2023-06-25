//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);


// } Driver Code Ends
class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        int i,j;
        vector<vector<int>> v;
        map<vector<int>,int> m;
        map<int,vector<int>> m1;
        for(i=0;i<row;i++)
        {
            vector<int> v1;
            for(j=0;j<col;j++)
            v1.push_back(M[i][j]);
            if(m[v1]==0)
            m[v1]=i+1;
        }
        for(auto x:m)
        m1[x.second]=x.first;
        for(auto x:m1)
        v.push_back(x.second);
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	Solution ob;
    	vector<vector<int>> vec = ob.uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}

// } Driver Code Ends