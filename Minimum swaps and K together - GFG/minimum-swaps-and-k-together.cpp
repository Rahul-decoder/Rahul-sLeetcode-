//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        int i,count=0;
       for(i=0;i<n;i++)
       {
          if(arr[i]<=k)
          count++;
       }
       int low=0,high=0,mini=INT_MAX,count1=0;
       while(high<n)
       {
           if(arr[high]<=k)
            count1++;
            if(high-low+1>count)
            {
                if(arr[low]<=k)
                count1--;
                low++;
            }
           if(high-low+1==count)
               mini=min(count-count1,mini);
            high++;
       }
       if(mini==INT_MAX)
       return 0;
       return mini;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends