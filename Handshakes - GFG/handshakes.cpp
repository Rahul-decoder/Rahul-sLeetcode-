//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int count(int n){
     vector<int> v(n+1,0);
     v[0]=1;
     int i,j;
     for(i=2;i<=n;i+=2)
     {
         for(j=0;j<=i-2;j+=2)
         v[i]+=v[j]*v[i-2-j];
     }
     return v[n];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends