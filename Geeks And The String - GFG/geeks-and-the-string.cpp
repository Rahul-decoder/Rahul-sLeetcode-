//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        int i;
        for(i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                if(i>0)
                i=i-2;
                else
                i--;
            }
            if(s.size()==0)
        return "-1";
        }
        
        return s;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends