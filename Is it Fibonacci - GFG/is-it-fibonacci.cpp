//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int n, int k, vector<long long> v) {
        long long int sum=0,i,j=0;
         vector<long long int> v1;
        for(i=0;i<k;i++)
        {
        sum+=v[i];
        v1.push_back(v[i]);
        }
       for(i=k;i<n;i++)
       {
           v1.push_back(sum);
           sum+=sum;
           sum-=v1[j];
           j++;
       }
       return v1[n-1];
        
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends