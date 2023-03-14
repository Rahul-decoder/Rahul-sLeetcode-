//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long maxPossibleValue(int n,vector<int> a, vector<int> b) {
        long long int sum=0,count=0,i;
        int mini=INT_MAX;
        for(i=0;i<n;i++)
        {
            sum+=b[i]/2*a[i]*2;
            count+=b[i]/2;
        }
        if(count%2==0)
        return sum;
        else
        {
            for(i=0;i<n;i++)
            {
                if(a[i]<mini&&b[i]>1)
                    mini=a[i];
            }
           sum-=2*mini; 
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends