//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int a[], int n, int k) {
       long long int sum=0,i;
       priority_queue<int> p;
       for(i=0;i<n;i++)
       p.push(a[i]);
       while(k--)
       {
           int x=p.top();
           sum+=x;
           p.pop();
           p.push(x/2);
       }
       return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends