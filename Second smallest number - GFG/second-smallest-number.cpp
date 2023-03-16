//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    string secondSmallest(int s, int d){
        string s1="";
        int sum=0,i,flag=0;
        for(i=0;i<d;i++)
        {
            s1.push_back('9');
            sum+=9;
        }
        if(sum>s)
        {
            sum=sum-s;
            if(sum>0)
            {
                if(sum>8)
                {
                s1[0]='1';
                sum-=8;
                }
                else
                {
                s1[0]=s1[0]-sum;
                sum=0;
                }
            }
            for(i=1;i<d;i++)
            {
                if(sum>8)
                {
                    sum-=9;
                    s1[i]='0';
                }
                else
                {
                    s1[i]=s1[i]-sum;
                    break;
                }
            }
        }
        for(i=d-1;i>=0;i--)
        {
         if(s1[i]!='9'&&i<d-1)
         {
             s1[i+1]=s1[i+1]-1;
             s1[i]=s1[i]+1;
             flag=1;
             break;
         }
         else if(s1[i]!='9'&&i==d-1)
         {
             s1[i]=s1[i]-1;
             s1[i-1]=s1[i-1]+1;
             flag=1;
             break;
         }
        }
        if(flag==0)
        return "-1";
       return s1;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends