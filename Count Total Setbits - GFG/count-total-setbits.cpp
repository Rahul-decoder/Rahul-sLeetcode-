//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  long long int fun(long long int n)
  {
      if(n==0)
      return 0;
      int i=0;
      while((1<<i)<=n)
      i++;
      i--;
      long long int re=i*(1<<(i-1))+(n-(1<<i)+1)+fun(n-(1<<i));
      return re;
  }
    long long countBits(long long n) {
        return fun(n);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long N;
        scanf("%lld",&N);
        
        Solution obj;
        long long res = obj.countBits(N);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends