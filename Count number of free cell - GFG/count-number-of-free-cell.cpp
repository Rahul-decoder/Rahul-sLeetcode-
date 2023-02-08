//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
     long long int a[n],b[n],i,count=n*n,p=0,q=0;
     vector<long long int> v;
     for(i=0;i<n;i++)
     {
        a[i]=0;
        b[i]=0;
     }
     for(i=0;i<k;i++)
     {
         long long int x=arr[i][0];
         long long int y=arr[i][1];
         if(a[x-1]==0)
         {
         count=count-n+q;
         a[x-1]=1;
         p++;
         }
         if(b[y-1]==0)
         {
         count=count-n+p;
         b[y-1]=1;
         q++;
         }
         v.push_back(count);
     }
     return v;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends