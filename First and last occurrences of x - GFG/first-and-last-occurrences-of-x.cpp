//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    { 
      int i,flag=0;
      int l=lower_bound(arr,arr+n,x)-arr;
      int u=upper_bound(arr,arr+n,x)-arr;
      for(i=0;i<n;i++)
      if(x==arr[i])
      {
          flag=1;
          break;
      }
      if(flag==0)
      return {-1,-1};
      return {l,u-1};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends