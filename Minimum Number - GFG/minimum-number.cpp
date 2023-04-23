//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        int i,count=0,count1=0,flag=0;
        int mini=*min_element(arr.begin(),arr.end());
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            count++;
            else
            count1++;
            if(arr[i]%mini==0)
            flag++;
        }
        if(flag==n)
        return mini;
        else
        {
            if(count&&count1)
            return 1;
            else if(count>0)
            return 2;
        }
        return 1;
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
        cout<<ob.minimumNumber(n,arr)<<endl;
    }
}
// } Driver Code Ends