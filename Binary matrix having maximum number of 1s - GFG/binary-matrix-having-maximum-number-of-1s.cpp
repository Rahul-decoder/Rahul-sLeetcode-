//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int n) {
       vector<int> v;
       int i,maxi=0,p=0;
       for(i=0;i<n;i++)
       {
           int low=0,high=n-1;
           while(low<=high)
           {
               int mid=(low+high)/2;
               if(mat[i][mid]==1)
               high=mid-1;
               else
               low=mid+1;
           }
           int count=n-low;
           if(count>maxi)
           {
               maxi=count;
               p=i;
           }
       }
       v.push_back(p);
       v.push_back(maxi);
       return v;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends