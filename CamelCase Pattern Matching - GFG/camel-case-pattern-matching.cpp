//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> s, string pattern) {
      vector<string> v;
      int i,j;
      vector<pair<string,int>> v1;
      for(j=0;j<N;j++)
      {
          string s1="";
          for(i=0;i<s[j].size();i++)
          {
              if(s[j][i]<='Z'&&s[j][i]>='A')
              s1.push_back(s[j][i]);
          }
          v1.push_back({s1,j});
      }
      for(i=0;i<N;i++)
      {
          int flag=0;
          for(j=0;j<pattern.size();j++)
          {
              if(pattern[j]!=v1[i].first[j])
              {
                  flag=1;
                  break;
              }
          }
          if(flag==0)
          v.push_back(s[v1[i].second]);
      }
      if(v.size()==0)
      v.push_back("-1");
      return v;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends