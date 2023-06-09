//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void fun(string s,set<string> &st,string s1)
	{
	    if(s.size()==0)
	    {
	        st.insert(s1);
	        return;
	    }
	    for(int i=0;i<s.size();i++)
	    {
	        string s2=s;
	        s2.erase(s2.begin()+i);
	        fun(s2,st,s1+s[i]);
	    }
	}
		vector<string>find_permutation(string s)
		{
		    vector<string> v;
		    set<string> st;
		    fun(s,st,"");
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