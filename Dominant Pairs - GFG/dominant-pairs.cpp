//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        int i,count=0;
        sort(arr.begin(),(arr.begin()+n/2));
        sort((arr.begin()+n/2),arr.end());
        for(i=n/2;i<n;i++)
        arr[i]=arr[i]*5;
        for(i=0;i<n/2;i++)
        {
            int r=arr[i];
        int p=upper_bound(arr.begin()+n/2,arr.end(),r)-arr.begin();
        count+=p-n/2;
        }
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
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends