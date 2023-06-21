//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    vector<string> fun(int n)
    {
        if(n==1)
        return {"0","1"};
        vector<string> v=fun(n-1),v1;
        for(int i=0;i<v.size();i++)
        v1.push_back('0'+v[i]);
        for(int i=v.size()-1;i>=0;i--)
        v1.push_back('1'+v[i]);
        return v1;
    }
    vector<string> graycode(int n)
    {
       return fun(n);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        Solution ob;
        vector<string> ans= ob.graycode(n);
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
            
        cout<<"\n";
    }
}




// } Driver Code Ends