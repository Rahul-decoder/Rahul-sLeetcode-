//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string a, string b) {
        int n1=a.size(),n2=b.size();
        string s=a,s1="";
        int r=n2/n1;
        while(r--)
        a=a+s;
        int j=0;
        while(j<a.size())
        {
            s1.push_back(a[j]);
            if(s1.size()>b.size())
            {
               s1.erase(s1.begin());
            }
            if(s1.size()==b.size())
            {
                if(s1==b)
                {
                    int p=ceil((j+1)*1.0/n1);
                    return p;
                }
            }
            j++;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends