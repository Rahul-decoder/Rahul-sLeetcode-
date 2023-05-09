//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int n,int k,vector<int> &a){
        int i=0,count=0,mini=INT_MAX,maxi=INT_MIN;
        vector<int> v,v1;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]<mini)
            mini=a[i];
            v.push_back(mini);
        }
        reverse(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
            if(a[i]>maxi)
            maxi=a[i];
            v1.push_back(maxi);
        }
        for(i=0;i<n-1;i++)
        {
            if(v1[i]+v[i+1]>=k)
            count++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends