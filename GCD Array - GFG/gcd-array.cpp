//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
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
    int solve(int n, int k, vector<int> &a) {
        int i,j;
        long long int sum=0;
        for(i=0;i<n;i++)
            sum+=a[i];
        for(i=1;i<n;i++)
        a[i]=a[i]+a[i-1];
        vector<int> v;
        for(i=1;i*i<=sum;i++)
        {
            if(sum%i==0)
            {
                v.push_back(i);
                if(sum/i!=i)
                v.push_back(sum/i);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        for(i=0;i<v.size();i++)
        {
            int count=0;
            for(j=0;j<n;j++)
            {
                if(a[j]%v[i]==0)
                count++;
            }
           if(count>=k)
           return v[i];
        }
        return 1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        
        vector<int> arr(N);
        Array::input(arr,N);
        
        Solution obj;
        int res = obj.solve(N, K, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends