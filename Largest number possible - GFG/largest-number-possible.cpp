//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int n, int s){
        if(n>1&&s==0)
        return "-1";
        string s1="";
        while(s>=9&&s1.size()<n)
        {
            s1.push_back('9');
            s-=9;
        }
        if(s<9&&s1.size()<n)
        {
            s1.push_back(s+'0');
            s=0;
        }
        if(s>0&&s1.size()==n)
        return "-1";
        while(s1.size()<n)
        s1.push_back('0');
        return s1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends