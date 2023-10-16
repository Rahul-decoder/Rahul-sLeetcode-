//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long int i=0,j=0,mul=1,maxi=0;
	    if(n==1)
	    return arr[0];
	    while(j<n)
	    {
	        if(arr[j]==0)
	        {
	            while(i<j)
	            {
	                if(mul!=arr[i])
	                mul=mul/arr[i];
	                maxi=max(maxi,mul);
	                i++;
	            }
	            i=++j;
	            mul=1;
	            continue;
	        }
	        else
            mul=mul*arr[j];
            maxi=max(maxi,mul);
	        j++;
	    }
	    while(i<j)
        {
            if(mul!=arr[i])
            mul=mul/arr[i];
            maxi=max(maxi,mul);
            i++;
        }
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