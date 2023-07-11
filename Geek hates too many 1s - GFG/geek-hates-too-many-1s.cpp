//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    int noConseBits(int n) {
        int i,count=0;
        string s="";
        for(i=0;i<32;i++)
        {
            if(n&1<<i)
            s.push_back('1');
            else
            s.push_back('0');
        }
        while(s[s.size()-1]=='0')
        s.pop_back();
        reverse(s.begin(),s.end());
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            count++;
            if(count==5)
            {
                s[i-2]='0';
                count=2;
            }
            if(s[i]=='0'&&count==4)
            {
                s[i-2]='0';
                count=0;
            }
            if(s[i]=='0'&&count==3)
            {
                s[i-1]='0';
                count=0;
            }
            if(s[i]=='0')
            count=0;
        }
        if(count==3)
        s[i-1]='0';
        if(count==4)
        s[i-2]='0';
        int sum=0;
        reverse(s.begin(),s.end());
        for(i=0;i<s.size();i++)
            sum+=pow(2,i)*(s[i]-'0');
        return sum;
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends