//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    long long int fun(int n,vector<long long int> &v)
    {
        if(n==0||n==1)
        return v[n]=1;
        if(v[n]!=-1)
        return v[n];
        return v[n]=fun(n-1,v)+fun(n-2,v);
    }
    vector<long long> printFibb(int n) 
    {
        vector<long long int> v(n,-1);
        if(n<=2)
        {
            v[0]=1;
            v[1]=1;
        }
        fun(n-1,v);
        return v;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends