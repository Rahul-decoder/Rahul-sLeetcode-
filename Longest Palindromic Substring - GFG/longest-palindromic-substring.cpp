//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string s){
        int i,j,n=s.size(),maxi=0,p=0,q=0;
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                if(j==i+j)
                dp[j][i+j]=1; 
                else if(i+1==2)
                {
                    if(s[j]==s[i+j])
                    dp[j][i+j]=2;
                }
                else
                {
                   if(s[j]==s[i+j])
                   {
                       if(dp[j+1][i+j-1]!=0)
                       dp[j][i+j]=dp[j+1][i+j-1]+2;
                   }
                }
                if(maxi<dp[j][i+j])
                {
                    p=j;
                    q=i+j;
                    maxi=dp[j][i+j];
                }
            }
        }
        return s.substr(p,q-p+1);
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends