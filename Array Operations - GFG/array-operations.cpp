//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
       int i,count=0,count1=0;
       for(i=0;i<n;i++)
       {
           if(arr[i]==0)
           {
               if(i>0&&arr[i-1]!=0)
               count++;
               count1++;
           }
       }
       if(count1==n)
       return 0;
       if(arr[n-1]!=0)
       count++;
       return count;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends