//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	set<string> fun(string s)
	{
	    if(s.size()==0)
	    {
	        set<string> v;
	        v.insert("");
	        return v;
	    }
	    set<string> v1;
	    for(int i=0;i<s.size();i++)
	    {
	        string s1=s;
	        s1.erase(s1.begin()+i);
	        set<string> v=fun(s1);
	        for(auto x:v)
	        v1.insert(s[i]+x);
	    }
	    return v1;
	}
		vector<string>find_permutation(string s)
		{
		   set<string> st=fun(s);
		   vector<string> v;
		   for(auto x:st)
		       v.push_back(x);
		       return v;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends