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
    int stockBuyAndSell(int n, vector<int> &prices) {
       int count=0,i,curr=0,flag=0;
       for(i=0;i<n-1;i++)
       {
           if(prices[i]<prices[i+1]&&flag==0)
           {
               curr=prices[i];
               flag=1;
           }
           else if(curr<prices[i]&&flag==1)
           {
               count+=prices[i]-curr;
               flag=0;
               i--;
           }
       }
       if(flag==1)
       count+=prices[n-1]-curr;
       return count;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> prices(n);
        Array::input(prices,n);
        
        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends