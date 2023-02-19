//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> a){
       int i,x=-1,y=-1;
       for(i=n-1;i>0;i--)
       {
           if(a[i]>a[i-1])
           {
           x=i-1;
           break;
           }
       }
       for(i=n-1;i>=0;i--)
       {
           if(a[i]>a[x])
           {
               y=i;
               break;
           }
       }
       if(x!=-1&&y!=-1)
        swap(a[y],a[x]);
        reverse(a.begin()+x+1,a.end());
        return a;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends