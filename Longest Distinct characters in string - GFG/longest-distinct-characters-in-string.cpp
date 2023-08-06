//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    unordered_map<char,int> m;
    int i=0,j=0,n=s.size(),maxi=INT_MIN;
    while(j<n)
    {
        if(m[s[j]])
        {
            while(m[s[j]]>0)
            {
                m[s[i]]--;
                if(m[s[i]]==0)
                m.erase(s[i]);
                i++;
            }
        }
        m[s[j]]++;
        maxi=max(maxi,(int)m.size());
        j++;
    }
    return maxi;
}