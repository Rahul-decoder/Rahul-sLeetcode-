//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int n, int k, vector<int> &a, vector<int> &b) {
       sort(a.begin(),a.end(),greater<int>());
       sort(b.begin(),b.end(),greater<int>());
       vector<int> v;
       priority_queue<pair<int,pair<int,int>>> q;
       q.push({a[0]+b[0],{0,0}});
       set<pair<int,int>> st;
       st.insert({0,0});
       while(v.size()<k)
       {
           pair<int,pair<int,int>> p=q.top();
           q.pop();
           v.push_back(p.first);
           int r=p.second.first,s=p.second.second;
           if(st.find({r+1,s})==st.end())
           {
               q.push({a[r+1]+b[s],{r+1,s}});
               st.insert({r+1,s});
           }
           if(st.find({r,s+1})==st.end())
           {
               q.push({a[r]+b[s+1],{r,s+1}});
               st.insert({r,s+1});
           }
       }
       sort(v.begin(),v.end(),greater<int>());
       return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends