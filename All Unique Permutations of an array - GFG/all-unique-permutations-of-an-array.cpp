//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void fun(vector<int> &arr,vector<vector<int>> &v,int n,vector<int> v1)
  {
      if(v1.size()==n)
      {
          v.push_back(v1);
          return ;
      }
      vector<int> v3(11,0);
      for(int i=0;i<arr.size();i++)
      {
          if(v3[arr[i]])
          continue;
          v3[arr[i]]=1;
          vector<int> v2=arr;
          v2.erase(v2.begin()+i);
          v1.push_back(arr[i]);
          fun(v2,v,n,v1);
          v1.pop_back();
      }
  }
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        vector<vector<int>> v;
        sort(arr.begin(),arr.end());
        vector<int> v1;
        fun(arr,v,n,v1);
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends