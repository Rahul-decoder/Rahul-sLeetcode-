//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long countWays(int n, int k){
        if(n==1)
        return k;
        long long int fr=k,se=k*(k-1),total=fr+se,i;
        for(i=3;i<=n;i++)
        {
            fr=se;
            se=total*(k-1)%1000000007;
            total=(fr+se)%1000000007; 
        }
        return total%1000000007;
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends