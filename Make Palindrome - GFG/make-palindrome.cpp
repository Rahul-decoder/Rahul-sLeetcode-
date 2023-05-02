//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
       unordered_map<string,int> m;
       int i,count=0;
       for(i=0;i<n;i++)
       m[arr[i]]++;
       for(i=0;i<n;i++)
       {
           string s1=arr[i];
           reverse(s1.begin(),s1.end());
           if(m[s1]>0)
           {
           count++;
           m[s1]--;
           m[arr[i]]--;
           }
       }
       if(n%2==0&&count==n/2||n%2!=0&&count==n/2+1)
       return 1;
       return 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends