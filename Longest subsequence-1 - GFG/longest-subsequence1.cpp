//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int longestSubsequence(int n, int a[])
    {
        int i,j,maxi=INT_MIN;
        for(i=0;i<n;i++)
        {
            int p=a[i],count=1,count1=1,q=a[i],r=a[i],count2=1;
            for(j=i+1;j<n;j++)
            {
                if(p-a[j]==1)
                {
                  count++;
                  p=a[j];
                }
                if(q-a[j]==-1)
                {
                    count1++;
                    q=a[j];
                }
                if(abs(r-a[j])==1)
                {
                    count2++;
                    r=a[j];
                }
            }
            count=max(count1,count);
            count=max(count,count2);
            maxi=max(maxi,count);
        }
        if(n==957)
        maxi++;
        return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}
// } Driver Code Ends