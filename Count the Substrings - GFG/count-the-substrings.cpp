//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string s)
    {
       int n=s.size(),count=0,i,j;
       for(i=0;i<n;i++)
       {
           int count1=0,count2=0;
           for(j=i;j<n;j++)
           {
               if(s[j]<='z'&&s[j]>='a')
               count1++;
               else
               count2++;
               if(count1==count2)
               count++;
           }
       }
       return count;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends