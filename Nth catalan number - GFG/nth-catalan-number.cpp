//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
       long long int i,sum=0;
       vector<long long int> v(n+1);
       v[0]=1;
       v[1]=1;
       for(i=2;i<n+1;i++)
       {
           sum=0;
           int l=0,h=i-1;
           while(l<h)
           {
               sum=(sum+2*v[l]*v[h])%1000000007;
               l++;
               h--;
           }
           if(i%2!=0)
           sum=(sum+v[l]*v[h])%1000000007;
           v[i]=sum;
       }
       return v[n];
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends