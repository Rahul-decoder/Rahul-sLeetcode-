//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  bool palin(string s2)
  {
      int l=0,h=s2.size()-1;
      while(l<h)
      {
          if(s2[l]!=s2[h])
          return 0;
          l++;
          h--;
      }
      return 1;
  }
  void fun(string s,vector<vector<string>> &v,vector<string> v1)
  {
     if(s.size()==0)
     {
         v.push_back(v1);
         return ;
     }
     for(int i=0;i<s.size();i++)
     {
         string s1=s.substr(0,i+1),s2=s.substr(i+1);
         if(palin(s1))
         {
             v1.push_back(s1);
             fun(s2,v,v1);
             v1.pop_back();
         }
     }
  }
    vector<vector<string>> allPalindromicPerms(string s) {
        vector<vector<string>> v;
        vector<string> v1;
        fun(s,v,v1);
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends