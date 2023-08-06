//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    
    void fun(string &s,vector<string> &v,string s1,vector<int> &v1)
    {
        if(s1.size()==s.size())
        {
            v.push_back(s1);
            return ;
        }
        for(int i=0;i<s.size();i++)
        {
            if(v1[i]==0)
            {
                v1[i]=1;
                s1.push_back(s[i]);
                fun(s,v,s1,v1);
                s1.pop_back();
                v1[i]=0;
            }
        }
    }
    vector<string> permutation(string s)
    {
        vector<string> v;
        int n=s.size();
        vector<int> v1(n,0);
        fun(s,v,"",v1);
        sort(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends