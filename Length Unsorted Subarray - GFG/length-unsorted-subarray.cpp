//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> printUnsorted(int arr[], int n) {
	    int i,p=0,q=0,mini=INT_MAX,maxi=INT_MIN;
	    vector<int> v;
	   for(i=0;i<n-1;i++)
	   {
	       if(arr[i]>arr[i+1]&&arr[i+1]<=mini)
	       {
	           p=i;
	           mini=arr[i+1];
	       }
	   }
	   for(i=n-2;i>=0;i--)
	   {
	       if(arr[i]>arr[i+1]&&arr[i]>=maxi)
	       {
	          q=i;
	          maxi=arr[i];
	       }
	   }
	   for(i=0;i<n;i++)
	   {
	       if(arr[i]>mini)
	       {
	           p=i;
	           break;
	       }
	   }
	   for(i=n-1;i>=0;i--)
	   {
	       if(arr[i]<maxi)
	       {
	           q=i;
	           break;
	       }
	   }
	   v.push_back(p);
	   v.push_back(q);
	   return v;
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
        auto ans = ob.printUnsorted(arr, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends