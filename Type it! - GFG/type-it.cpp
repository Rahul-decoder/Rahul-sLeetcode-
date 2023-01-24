//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        int i,j,n=s.size(),maxi=0,n1;
        string s1,s2;
        for(i=1;i<n/2;i++)
        {
            s1=s.substr(0,i+1);
            s2=s.substr(i+1,s1.size());
            n1=s1.size();
            if(s1==s2)
            maxi=max(maxi,n1);
        }
        if(maxi!=0)
        return n-maxi+1;
        return n;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends