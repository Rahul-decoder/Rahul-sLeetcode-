//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string s, string t) {
        int n=s.size(),m=t.size();
        int j=0,i;
        for(i=0;i<n;i++)
        {
           if(j>=m)
           return 0;
           if(t[j]<='Z'&&t[j]>='A'&&s[i]!=t[j])
           return 0;
           else if(t[j]>'Z'||t[j]<'A')
           {
               int r=0;
              while(j<m&&(t[j]>'Z'||t[j]<'A'))
              {
                 r=r*10+(t[j]-'0'); 
                 j++;
              }
              i=i+r-1;
              j--;
           }
           j++;
        }
        if(i>n)
        return 0;
        return 1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends