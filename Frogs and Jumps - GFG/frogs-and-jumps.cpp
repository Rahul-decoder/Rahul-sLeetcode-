//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int n, int leaves, int frogs[]) {
       int a[leaves+1],i,j,count=0;
       for(i=0;i<=leaves;i++)
       a[i]=0;
       for(i=0;i<n;i++)
       {
           if(frogs[i]>leaves||a[frogs[i]]!=0)
           continue;
          for(j=frogs[i];j<=leaves;j+=frogs[i])
          {
              if(a[j]==0)
              {
              a[j]=1;
              count++;
              }
          }
       }
       return leaves-count;
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends