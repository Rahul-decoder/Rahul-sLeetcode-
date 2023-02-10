//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        int i,n=s.size(),r=0,mini=INT_MAX;
        map<char,int> m;
        for(i=0;i<n;i++)
        {
          if(s[i]=='b'||s[i]=='a'||s[i]=='l'||s[i]=='o'||s[i]=='n')   
          m[s[i]]++;
        }
        for(auto x:m)
        {
            if(x.first=='a'||x.first=='b'||x.first=='n')
             r=x.second;
            else
             r=x.second/2;
            mini=min(mini,r);
        }
        return mini;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends