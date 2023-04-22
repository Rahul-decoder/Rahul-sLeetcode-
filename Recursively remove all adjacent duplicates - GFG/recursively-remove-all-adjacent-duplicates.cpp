//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
string fun(string s)
{
    string p="";
    int i,n=s.size();
    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            while(i<n-1&&s[i]==s[i+1])
            i++;
        }
        else
        p.push_back(s[i]);
    }
    if(i==n-1)
    p.push_back(s[i]);
    return p;
}
    string rremove(string s){
       string s1="";
       while(s1.size()!=s.size())
       {
           s1=s;
           s=fun(s);
       }
       return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends