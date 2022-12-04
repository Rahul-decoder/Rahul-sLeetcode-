//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string rearrange (string s, int n)
    {
        int i,j,a[26]={-1},b[26]={0},count=0;
        a[0]=0,a[4]=0,a[8]=0,a[14]=0,a[20]=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='a')
             a[0]++;
            else if(s[i]=='e')
             a[4]++;
            else if(s[i]=='i')
             a[8]++;
            else if(s[i]=='o')
             a[14]++;
            else if(s[i]=='u')
             a[20]++;
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
            {
                b[s[i]-'a']++;
                count++;
            }
        }
        int p=n-count,k=0,flag=0;
        i=0,j=0;
        if(abs(count-p)>1)
        return "-1";
        else
        {
           while(a[i]<=0)
               i++;
             while(b[j]<=0)
               j++;
            if(count==p)
            {
                if(i>j)
                {
                s[k]=j+'a';
                b[j]--;
                flag=1;
                }
                else
                {
                s[k]=i+'a';
                a[i]--;
                }
                k++;
            }
            if(p>count)
            {
                s[k]=i+'a';
                a[i]--;
                k++;
            }
            while(k<n)
            {
                while(a[i]<=0)
                i++;
                while(b[j]<=0)
                j++;
                if(flag!=1)
                {
                s[k]=j+'a';
                b[j]--;
                k++;
                }
                if(k==n)
                break;
                s[k]=i+'a';
                a[i]--;
                k++;
                if(k==n)
                break;
                if(flag==1)
                {
                s[k]=j+'a';
                b[j]--;
                k++;
                }
            }
        }
        return s;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends