//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int fun(int n,vector<int>&v)
  {
      if(n==0||n==1)
      return n;
      if(v[n]!=-1)
      return v[n];
      return v[n]=(fun(n-1,v)+fun(n-2,v))%1000000007;
  }
    int nthFibonacci(int n){
        vector<int> v(n+1,-1);
        return fun(n,v);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends