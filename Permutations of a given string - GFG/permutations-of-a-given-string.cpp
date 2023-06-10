//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void fun(int count,vector<string> &v,string s1,map<char,int> m)
	{
	    if(count==0)
	    {
	        v.push_back(s1);
	        return;
	    }
	    for(auto x:m)
	    {
	        if(x.second>0)
	        {
    	        int a=x.second;
    	        char ch =x.first;
    	        m[ch]=a-1;
    	        fun(count-1,v,s1+ch,m);
    	        m[ch]=a;
	        }
	    }
	}
		vector<string>find_permutation(string s)
		{
		    vector<string> v;
		    map<char,int> m;
		    int i;
		    for(i=0;i<s.size();i++)
		    m[s[i]]++;
		    fun(s.size(),v,"",m);
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