//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int maxi=0,i;
	    for(i=0;i<n;i++)
	    maxi=max(maxi,arr[i]);
	    for(i=0;i<n;i++)
	    arr[i]-=maxi;
	    int maxi1=INT_MIN;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	         maxi1=max(maxi1,arr[i]);
	    }
	    if(maxi1==INT_MIN)
	    return-1;
	    return maxi+maxi1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends