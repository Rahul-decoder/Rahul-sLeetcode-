//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
       unordered_map<int,int> m;
       int i,maxir=INT_MIN,mini=INT_MAX;
       for(i=0;i<n;i++)
       m[arr[i]]++;
       for(auto x:m)
       {
           if(x.second==mini)
           maxir=max(maxir,x.first);
           if(x.second<mini)
           {
               mini=x.second;
               maxir=x.first;
           }
       }
       return maxir;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends