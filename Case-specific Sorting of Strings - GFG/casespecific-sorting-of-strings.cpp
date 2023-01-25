//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        vector<char> v1,v2;
        int i;
        for(i=0;i<n;i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            v1.push_back(str[i]);
            else
            v2.push_back(str[i]);
        }
        sort(v1.begin(),v1.end(),greater<char>());
        sort(v2.begin(),v2.end(),greater<char>());
        for(i=0;i<n;i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                str[i]=v1[v1.size()-1];
                v1.pop_back();
            }
            else
            {
                str[i]=v2[v2.size()-1];
                v2.pop_back();
            }
        }
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends