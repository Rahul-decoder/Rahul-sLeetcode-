//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int fun(int arr[],int i,int n,int sum,vector<vector<int>>&v)
    {
        if(sum==0)
        return 1;
        if(i>=n||sum<0)
        return 0;
        if(v[i][sum]!=-1)
        return v[i][sum];
        return v[i][sum]=(fun(arr,i+1,n,sum,v) + fun(arr,i+1,n,sum-arr[i],v))%1000000007;
    }
	int perfectSum(int arr[], int n, int sum)
	{
	    vector<vector<int>> v(n+1,vector<int>(sum+1,-1));
	    sort(arr,arr+n);
        return fun(arr,0,n,sum,v);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends