//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
    //Complete the function and return minimum number of operations
    public:
    int specialPalindrome(string s1, string s2){
        int i=0,j=0,n1=s1.size(),n2=s2.size(),mini=INT_MAX;
        if(n1<n2)
        return -1;
        string s=s1;
        for(i=0;i<=n1-n2;i++)
        {
            int count=0,flag=0;
            s=s1;
           for(j=0;j<n2;j++)
           {
               if(s[i+j]!=s2[j])
               {
               count++;
               s[i+j]=s2[j];
               }
           }
           int low=0,high=n1-1;
           while(low<=high)
           {
               if(s[low]!=s[high])
               {
               count++;
               if(low>=i&&low<i+n2&&high>=i&&high<i+n2)
               flag=1;
               }
               low++;
               high--;
           }
           if(flag==1)
           continue;
           mini=min(mini,count);
        }
        if(mini==INT_MAX)
        return -1;
        return mini;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        Solution obj;
        int ans = obj.specialPalindrome(s1,s2);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends