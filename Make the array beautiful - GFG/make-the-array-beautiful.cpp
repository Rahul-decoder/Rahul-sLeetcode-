//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> a) {
        vector<int> v;
        int i=0,n=a.size();
        while(i<n)
        {
            if(v.size()<=0)
            {
                v.push_back(a[i]);
                i++;
            }
           else
           {
               if(v[v.size()-1]<0&&a[i]<0||v[v.size()-1]>=0&&a[i]>=0)
                   v.push_back(a[i]);
                   else
                   v.pop_back();
                   i++;
           }
        }
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends