//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       int i,j,n1=s1.size(),n2=s2.size(),l=0,h=0;
       int n=n1+n2-1;
       vector<int> v(n1+n2,0);
       if(s1[0]=='-')
       l++;
       if(s2[0]=='-')
       h++;
       for(i=n1-1;i>=l;i--)
       {
           int cr=0,p=s1[i]-'0',k=n;
           for(j=n2-1;j>=h;j--)
           {
               int q=s2[j]-'0';
               int r=p*q+cr+v[k];
               v[k]=r%10;
               cr=r/10;
               k--;
           }
           v[k]=cr;
           n--;
       }
       i=0;
       string s="";
       if(l==1&&h==0||l==0&&h==1)
       s.push_back('-');
       while(v[i]==0)
       i++;
       for(;i<n1+n2;i++)
       s.push_back(v[i]+'0');
       return s;
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends