//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
       unordered_map<char,int> m;
       int i=0,j=0,n=s.size();
       char ch=s[0];
       while(j<n)
       {
           m[s[j]]++;
           if(m[ch]>1)
           {
               while(m[s[i]]>1&&i<=j)
               i++;
               ch=s[i];
           }
           j++;
       }
       if(i==j)
       return '$';
       return ch;
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends