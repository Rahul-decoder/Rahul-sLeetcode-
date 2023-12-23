//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        int i,maxi=0;
        map<int,int> m;
        if(a[0]==0)
        maxi=1;
        for(i=1;i<n;i++)
        {
            if(a[i]==0)
            maxi=max(maxi,1);
            a[i]=a[i]+a[i-1];
            if(a[i]==0)
            maxi=max(maxi,i+1);
        }
        
        for(i=0;i<n;i++)
        {
            if(m[a[i]])
            maxi=max(maxi,i-m[a[i]]+1);
            else
            m[a[i]]=i+1;
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends