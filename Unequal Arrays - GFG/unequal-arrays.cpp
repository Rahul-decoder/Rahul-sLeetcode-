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
    long long solve(int n, vector<int> &a, vector<int> &b) {
        long long int i,sum=0,sum1=0,count1=0,count2=0;
        vector<int> v,v1,v2,v3;
        for(i=0;i<n;i++)
       {
           if(a[i]%2==0)
           count1++;
           if(b[i]%2==0)
           count2++;
           sum1+=a[i]-b[i];
       }
       if(count1!=count2||sum1!=0)
       return -1;
        unordered_map<long long int,long long int> m;
        for(i=0;i<n;i++)
        m[a[i]]++;
        for(i=0;i<n;i++)
        {
            if(m[b[i]])
            m[b[i]]--;
            else
            {
                if(b[i]%2==0)
            v.push_back(b[i]);
            else
            v1.push_back(b[i]);
            }
        }
        for(auto x:m)
        {
            int r=x.second;
            if(x.first%2==0)
            {
            while(r--)
           v2.push_back(x.first);
            }
            else
            {
                 while(r--)
           v3.push_back(x.first);
            }
        }
        sort(v.begin(),v.end());
         sort(v1.begin(),v1.end());
          sort(v2.begin(),v2.end());
           sort(v3.begin(),v3.end());
           sum1=0,sum=0;
      for(i=0;i<v1.size();i++)
         sum1+=abs(v1[i]-v3[i])/2;
         for(i=0;i<v.size();i++)
         sum+=abs(v[i]-v2[i])/2;
        if(sum>sum1)
        {
            sum-=sum1;
            sum/=2;
            sum+=sum1;
        }
        else
        {
            sum1-=sum;
            sum1/=2;
            sum1+=sum;
            sum=sum1;
        }
         
         return sum;
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
        Array::input(A,N);
        
        
        vector<int> B(N);
        Array::input(B,N);
        
        Solution obj;
        long long res = obj.solve(N, A, B);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends