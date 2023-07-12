//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    bool fun(int a[],int n,vector<int>&v,int i,int k)
    {
        if(i==n)
        {
            if(v.size()==k)
            {
                for(int j=0;j<k-1;j++)
                {
                    if(v[j]!=v[j+1])
                    return 0;
                }
                return 1;
            }
            return 0;
        }
        for(int j=0;j<(int)v.size();j++)
        {
            v[j]+=a[i];
            if(fun(a,n,v,i+1,k))
            return 1;
            v[j]-=a[i];
        }
        if(v.size()<k)
        {
            v.push_back(a[i]);
            if(fun(a,n,v,i+1,k))
            return 1;
            v.pop_back();
        }
        return 0;
    }
    bool isKPartitionPossible(int a[], int n, int k)
    {
         vector<int> v;
         return fun(a,n,v,0,k);
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
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}
// } Driver Code Ends