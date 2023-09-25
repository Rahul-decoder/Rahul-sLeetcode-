//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int w) {
        sort(arr.begin(),arr.end());
        set<vector<int>> v;
        vector<vector<int>> res;
        int i,j,k,l,n=arr.size();
        for(i=0;i<n-3;i++)
        {
            int sum=0;
            for(j=i+1;j<n-2;j++)
            {
                k=j+1;
                l=n-1;
                sum=arr[j]+arr[i]+arr[k]+arr[l];
                while(k<l)
                {
                   if(sum==w)
                   {
                       v.insert({arr[i],arr[j],arr[k],arr[l]});
                       k++;
                       l--;
                       if(k>=l)
                       break;
                       sum=arr[i]+arr[j]+arr[k]+arr[l];
                   }
                   if(sum<w)
                   {
                       sum-=arr[k];
                       k++;
                       sum+=arr[k];
                   }
                   else if(sum>w)
                   {
                       sum-=arr[l];
                       l--;
                       sum+=arr[l];
                   }
                }
            }
        }
        for(auto x:v)
        res.push_back(x);
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends