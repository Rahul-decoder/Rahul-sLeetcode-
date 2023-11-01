//{ Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    int i=0,j=1,n=s.size();
	   vector<int> v(n,0);
	    while(j<n)
	    {
	        if(s[j]==s[i])
	        {
    	        v[j]=i+1;
    	        i++;
	        }
	        else
	        {
	            i=v[j-1];
	            while(i>0&&s[i]!=s[j])
	            i=v[i-1];
	            if(s[i]==s[j])
	            {
    	            v[j]=i+1;
    	            i++;
	            }
	        }
	        j++;
	    }
	    return v[n-1];
	}
};

//{ Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

// } Driver Code Ends