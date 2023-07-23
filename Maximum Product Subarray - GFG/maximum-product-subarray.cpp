//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    if(n==1)
	    return arr[0];
	    long long int mul=1,maxi=LLONG_MIN,i=0,j=0,k,count=0,flag=1;
	    for(k=0;k<n-1;k++)
	    {
	        if(arr[k]<0&&arr[k+1]<0)
	        flag=0;
	    }
	    while(j<n)
	    {
	        if(arr[j]==0)
	        {
	            if(count%2!=0)
	            {
	                long long int mul1=mul;
	                while(1)
	                {
	                    mul1=mul1/arr[i];
	                    if(arr[i]<0)
	                    break;
	                    i++;
	                }
	                maxi=max(maxi,mul1);
	                mul1=mul;
	                k=j-1;
	                while(1)
	                {
	                    mul1=mul1/arr[k];
	                    if(arr[k]<0)
	                    break;
	                    k--;
	                }
	                 maxi=max(maxi,mul1);
	            }
	            i=j+1;
	            count=0;
	        }
	        if(arr[j]<0)
	        count++;
	        if(arr[j]!=0)
	        mul=mul*arr[j];
	        else
	        mul=1;
	        maxi=max(maxi,mul);
	        j++;
	    }
	    if(count%2!=0)
	    {
	        long long int mul1=mul;
	        while(1)
	        {
	            mul1=mul1/arr[i];
	            if(arr[i]<0)
	            break;
	            i++;
	        }
	        maxi=max(maxi,mul1);
	        mul1=mul;
	        k=j-1;
	        while(1)
            {
                mul1=mul1/arr[k];
                if(arr[k]<0)
                break;
                k--;
            }
            maxi=max(maxi,mul1);
	    }
	    if(maxi==1&&flag==1)
	    return 0;
	    return maxi;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends