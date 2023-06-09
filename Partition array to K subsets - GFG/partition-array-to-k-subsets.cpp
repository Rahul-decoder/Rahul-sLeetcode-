//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    void fun(int a[],int n,vector<int> v,int i,int k,int &flag)
    {
        if(i==n)
        {
            if(v.size()==k)
            {
                int count=0;
                for(int j=0;j<v.size()-1;j++)
                {
                    if(v[j]==v[j+1])
                    count++;
                }
                if(count==k-1)
                flag=1;
            }
           return;
        }
        for(int j=0;j<v.size();j++)
        {
            v[j]+=a[i];
            fun(a,n,v,i+1,k,flag);
            v[j]-=a[i];
        }
        if(v.size()<k)
        {
            v.push_back(a[i]);
            fun(a,n,v,i+1,k,flag);
        }
    }
    bool isKPartitionPossible(int a[], int n, int k)
    {
         vector<int> v;
         int i,flag=0;
         fun(a,n,v,0,k,flag);
         if(flag==1)
         return 1;
         return 0;
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