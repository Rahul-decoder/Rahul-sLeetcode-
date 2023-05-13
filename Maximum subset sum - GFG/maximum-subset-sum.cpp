//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class IntArray
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    long long int dp[100001][2];
    long long f(int n,vector<int>&A,bool prev){
        if(n==0) return 0;
        if(dp[n][prev]!=-1) return dp[n][prev];
        long long int take=0;
        long long int not_take=0;
        if(prev==false){
            take=A[n-1]+f(n-1,A,true);
            not_take=LLONG_MIN;
        }
        else{
            take=A[n-1]+f(n-1,A,true);
            not_take=f(n-1,A,false);
        }
        return dp[n][prev]=max(take,not_take);
    }
    long long findMaxSubsetSum(int N, vector<int> &A) {
        memset(dp,-1,sizeof(dp));
        return max(f(N,A,true),f(N,A,false));
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        IntArray::input(A,N);
        
        Solution obj;
        long long res = obj.findMaxSubsetSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends