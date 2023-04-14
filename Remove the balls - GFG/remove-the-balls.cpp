//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int n, vector<int> c, vector<int> r) {
        int i;
        stack<int> st,st1;
        for(i=0;i<n;i++)
        {
            if(st.empty())
            {
            st.push(c[i]);
            st1.push(r[i]);
            }
            else
            {
                if(st.top()==c[i]&&st1.top()==r[i])
                {
                    st.pop();
                    st1.pop();
                }
                else
                {
                    st.push(c[i]);
                    st1.push(r[i]);
                }
            }
        }
        return st.size();
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends