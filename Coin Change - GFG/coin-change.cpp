//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long int fun(int coins[],int i,int n,int sum,vector<vector<long long int>>&v)
  {
      if(sum==0)
      return 1;
      if(i>=n||sum<0)
      return 0;
      if(v[i][sum]!=-1)
      return v[i][sum];
      return v[i][sum]=fun(coins,i,n,sum-coins[i],v)+fun(coins,i+1,n,sum,v);
  }
    long long int count(int coins[], int n, int sum) {
        vector<vector<long long int>> v(n,vector<long long int>(sum+1,-1));
        return fun(coins,0,n,sum,v);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends