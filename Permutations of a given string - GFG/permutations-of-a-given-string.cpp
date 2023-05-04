//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void fun(string s,string s1,set<string> &v)
	{
	    if(s.size()==0)
	    {
    	     v.insert(s1);
    	     return ;
	    }
	    for(int i=0;i<s.size();i++)
	    {  
	        string st=s;
	        st.erase(st.begin()+i);
	        fun(st,s1+s[i],v);
	    }
	}
		vector<string>find_permutation(string s)
		{
		    string s1="";
		    set<string> v;
		    vector<string> vr; 
		    fun(s,s1,v);
		    for(auto x:v)
		    vr.push_back(x);
		    return vr;
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