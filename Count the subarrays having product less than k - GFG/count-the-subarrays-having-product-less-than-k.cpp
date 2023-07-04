//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i=0,j=0,count=0;
        long long int mul=1;
        while(j<n)
        {
            mul=mul*a[j];
            if(mul<k)
            count+=j-i+1;
            else
            {
                while(i<=j&&mul>=k)
                {
                    mul=mul/a[i];
                    i++;
                }
                count+=j-i+1;
            }
            j++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends