//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
           int i,j;
           vector<int> v,v1;
           v.push_back(a[0]);
           for(i=1;i<n;i++)
           {
               if((a[i]+a[i-1])%2!=0)
               {
                   sort(v.begin(),v.end(),greater<int>());
                   for(j=0;j<v.size();j++)
                   v1.push_back(v[j]);
                   v.clear();
                   v.push_back(a[i]);
               }
               else
               v.push_back(a[i]);
           }
           sort(v.begin(),v.end(),greater<int>());
                   for(j=0;j<v.size();j++)
                   v1.push_back(v[j]);
           return v1;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends