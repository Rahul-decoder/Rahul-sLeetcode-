//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int n, string s, int x){
        
        int i;
        vector<int> v;
        for(i=0;i<n;i++)
        {
           if(s[i]=='1')
           v.push_back(i);
        }
        int a=v[0]+x,b=v[0]-x,n1=v.size();
        if(b>0)
        return 0;
        for(i=1;i<n1;i++)
        {
            if(v[i]-x>a+1)
            return 0;
            else
            a=v[i]+x;
        }
        a=v[n1-1]+x;
        if(a<n-1)
        return 0;
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends