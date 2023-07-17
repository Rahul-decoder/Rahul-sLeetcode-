//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    int i=0,j=0,n=s.size();
		    string s1="";
		    unordered_map<char,int> m;
		    char curr=s[0];
		     while(j<n)
		     {
		       m[s[j]]++;
		       if(m[s[j]])
		       {
		           while(m[s[i]]>1&&i<=j)
		           i++;
		           curr=s[i];
		           if(i>j)
		           curr='#';
		       }
		       s1.push_back(curr);
		       j++;
		     }
		     return s1;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends