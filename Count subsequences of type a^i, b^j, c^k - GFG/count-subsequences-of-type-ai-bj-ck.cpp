//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template 

class Solution{
  public:
    int fun(string &s) {
        int i,n=s.size();
        long long int a=0,b=0,c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='a')
            a=(a*2+1)%1000000007;
            else if(s[i]=='b')
            b=(2*b+a)%1000000007;
            else
            c=(2*c+b)%1000000007;
        }
        return c%1000000007;
    }
};

//{ Driver Code Starts.
 
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.fun(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends