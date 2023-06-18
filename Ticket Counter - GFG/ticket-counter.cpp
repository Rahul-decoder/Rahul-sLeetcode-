//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int n, int k) {
     int l=1,h=n,count=0;
     while(h-l>k)
     {
         if(count%2==0)
         {
             l+=k;
             count++;
         }
         else
         {
             h-=k;
             count++;
         }
     }
     if(count%2!=0)
     return l;
     return h;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends