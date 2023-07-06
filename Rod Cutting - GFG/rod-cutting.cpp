//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int fun(int price[],int n,vector<int>&v)
  {
      if(n==0)
      return 0;
      if(v[n]!=-1)
      return v[n];
      for(int i=1;i<=n;i++)
       v[n]=max(price[i-1]+fun(price,n-i,v),v[n]);
      return v[n]; 
  }
    int cutRod(int price[], int n) {
        vector<int> v(n+1,-1);
        return fun(price,n,v);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends