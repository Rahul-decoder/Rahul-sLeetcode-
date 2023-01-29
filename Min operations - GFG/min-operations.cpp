//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve(int a, int b) {
        vector<int> v,v1;
        int i;
        if(a==b)
        return 0;
        if(a>b)
        {
            int t=a;
            a=b;
            b=t;
        }
        while(a>0)
        {
            v.push_back(a&1);
            a=a/2;
        }
        while(b>0)
        {
            v1.push_back(b&1);
            b=b/2;
        }
        for(i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                if(v1[i]!=1)
                return 2;
            }
        }
        return 1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.solve(a, b);
        
        printf("%d\n", res);
        
    }
}

// } Driver Code Ends